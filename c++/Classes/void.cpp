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
		friend void showInfo(myClass& c);
		
};
void showInfo(myClass& c)
{
	
	cout<<endl<<c.info;
}

void nonFriendFunction(myClass& c)
{
	//cout<<endl<<c.info;
}

class DClass:public myClass{
	
	public:
		void getDerived()
		{
			getData();
		}
	friend void DClassfun(DClass& d);	
		
};

void DClassfun(DClass& d)
{
	d.getData();
}




class C{
	private:
		string info="Hello everyone";
		public:
			void getData()
			{
				cout<<endl<<info;
			}
			
			friend void ClassInfo(C& c);
};

void ClassInfo(C& c)
{
	cout<<endl<<c.info;
}

class D:public C{
	public:
		void get()
		{
			getData();
		}
		friend void getDerived(D& d);
};
void getDerived(D& d)
{
	d.get();
}


int main()
{
	//myClass firstClass;
	//showInfo(firstClass);
	//firstClass.getData();
	
	
	//nonFriendFuntion(firstClass);
	
	//DClass D;
	//D.getDerived();
	//DClassfun(D);
	
	C c;
	ClassInfo(c);
	
	
	return 0;
}
