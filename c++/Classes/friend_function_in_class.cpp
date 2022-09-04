#include<iostream>
using namespace std;

class myClass{
	private:
		string info="This is swapna mam's class. C plus plus programming";
		
		public:
			myClass()
			{
				cout<<endl<<"Class started!";
				
			}
			void getData()
		{
			cout<<endl<<info;
		}
		//friend void showInfo(myClass& c);
		
};
//void showInfo(myClass& c)
//{
//	
//	cout<<endl<<c.info;
//}

void nonFriendFunction(myClass& c)
{
	cout<<endl<<c.info;
}

class DClass:public myClass{
	
	public:
		void getDerived()
		{
			getData();
		}
	friend void DClassfu(DClass& d);	
		
};

void DClassfun(DClass& d)
{
	d.getDerived();
}
int main()
{
	myClass firstClass;
	//showInfo(firstClass);
	firstClass.getData();
	
	
	//nonFriendFuntion(firstClass);
	
	//DClass D;
	//D.getDerived();
	//DClassfun(D);
	
	
	return 0;
}
