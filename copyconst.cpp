#include<iostream>
using namespace std;
class counter
{
	int count;
	public:
		counter(int c)
		{
			count=c;
		}
	counter(counter &ob)
	{
		cout<<"\nCopy constructor invoked";
		count=ob.count;
		
	}
	void show()
	{cout<<"\ncount = "<<count;
	}
};int main()
{
	counter c1(10);
	counter c2(c1);
	c1.show();
	c2.show();
	return 0;
}
