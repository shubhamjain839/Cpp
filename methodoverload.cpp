#include<iostream>
using namespace std;
class method
{
	public:
		
		void func(int a,int b)
		{
		int x,y;
		x=a;
		y=b;
		int sum= (x+y);
		cout<<"Sum is: "<<sum<<endl;
		}
		void func(double a,double b)
		{
			double x,y;
			x=a;
			y=b;
			float sum=(x+y);
			cout<<"Sum is: "<<sum<<endl;
		}
};
int main()
{
	method m1;
	m1.func(10,20);
	m1.func(9.7,8.5);
	return 0;
}
