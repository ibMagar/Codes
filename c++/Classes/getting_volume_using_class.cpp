#include<iostream>

using namespace std;

class cuboid{
	private:
		int l,b,h;
		public:
			cuboid()
			{
				l=1,b=1,h=1;
			}
			cuboid(int l, int b,int h)
			{
				this->l=l;
				this->b=b;
				this->h=h;
			}
		friend void	getVolume(cuboid& c);
			
};
 void getVolume(cuboid& c){
	cout<<endl<<"volume: "<<c.l*c.b*c.h;
}






int main()
{
	
	cuboid c(3,3,3);
	getVolume(c);
	
	return 0;
}
