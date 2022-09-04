/* account number, name, credit use appropirate functions to read the data
 deposit as a separate function
 withdrawl as a separate function
 if the balance amount is less than 3 thousand throw a user defined exception*/


 #include<iostream>
 #include<string>
 #include<cmath>
 #include<stdlib.h>
 
 using namespace std;
 
class myException:public exception
{
    public:
     char* what()
    {
        cout<<"error occured... the balance is less than 3000";
    }
}myexp;
class bankAcc{
    string name;
    long int accNumber,debit,credit,balance=0;

    public:
        bankAcc()
        {

        }
        void getDetails()
        {
            cout<<endl<<"enter account number and name: ";
            cin>>accNumber>>name;
        }
        void deposit()
        {
            cout<<endl<<"enter the deposit amount";
            cin>>credit;
            balance+=credit;
        }
        void withdraw()
        {
            cout<<endl<<"enter the amount to withdraw";
            cin>>debit;
            try{
                if(balance<3000 || balance<debit)
                {
                    throw myexp;
                }
            }
            catch(myException e)
            {
                e.what();
            }
            balance-=debit;
            cout<<"remaining amount: "<<balance;
        }
};
 int main()
 {
 system("cls");
 
 bankAcc b;
 b.getDetails();
 b.deposit();
 b.withdraw();
 
 return 0;
 }