#include<iostream>
using namespace std;


class employee{
	
	private:
	 int salary;
  int hours;
	
	public:
		employee()
		{
			salary=5000;
			hours=5;
		}
		employee(int salary, int hours)
		{
			this->salary=salary;
			this->hours=hours;
			
		}
		
		void getinfo();
		void addSal();
		void work();
	
};
void employee::getinfo()

		{
			cout<<endl<<"salary: Rs."<<salary<<endl<<"hours of work: "<<hours<<" hours";
			
		}
void employee::addSal()
{
			if(salary<10000)
			{
				salary+=1000;
			}
}

void employee::work()

		{
			if(hours>8)
			{
				salary+=500;
			}
		}
		
		
int main()
{
	employee e(8000,5);
	e.getinfo();
	e.addSal();
	e.work();
	e.getinfo();
	
	return 0;
}
