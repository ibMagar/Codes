#include<iostream>
using namespace std;

class MainClass{
	private:
	 string info="This is the private information of the Base class";
	
	public:
		void getData()
		{
			cout<<endl<<info;
		}
		
};

class MainClass2{
	private :
		string info="CplusplusProgramming Class";
		public:
			void getData()
			{
				cout<<endl<<info;
			}
};

class SubClass: public MainClass, public MainClass2{
	private:
	
		public:
//			void getData()
//			{
//				MainClass::getData();
//			}

		void outsideDeclarationFunction(string value);
			friend void getData(SubClass& C);
};

void SubClass::outsideDeclarationFunction(string value){
	cout<<endl<<value;
}


void getData(SubClass& C)
{
	//C.getMainData();
	C.MainClass::getData();
	C.MainClass2::getData();
	
	
	
}

int main()
{
	SubClass sC;
	getData(sC);
	sC.outsideDeclarationFunction("Swapna maam");
	return 0;
}
