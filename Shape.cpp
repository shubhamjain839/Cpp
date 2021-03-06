#include<iostream>
#define PI 3.14
using namespace std;
class Shape
{
	public:
		int Len;
		int Wid;
		int Rad;
		void Get_Len()
		{
			cout<<"\nEnter the Length :";
			cin>>Len;
			cout<<"\nEntered Length :"<<Len;
		}
		void Get_Wid()
		{
			cout<<"\nEnter the Width :";
			cin>>Wid;
			cout<<"\nEntered Width is :"<<Wid;
		}
		void Get_Rad()
		{
			cout<<"\nEnter the Radius :";
			cin>>Rad;
			cout<<"\nEntered Radius is :"<<Rad;
		}
};
class Sqr:public Shape
{
	public:
		Sqr(int xlen)
		{
			Len=xlen;
		}
		void Sqr_L()
		{
			cout<<"\nSquare :"<<Len*Len;
		}
		void Cube()
		{
			cout<<"\nCube of Square is :"<<Len*Len*Len;
		}
};
class Rec:public Shape
{
	public:
		Rec(int xlen,int xwid)
		{
			Len=xlen;
			Wid=xwid;
		}
		void Area_R()
		{
			cout<<"\nArea of Rectangle :"<<Len*Wid;
		}
		void Para_R()
		{
			cout<<"\nParameter of Rectangle :"<<2*(Len+Wid);
		}
};
class Circ:public Shape
{
	public:
		Circ(int xrad)
		{
			Rad=xrad;
		}
		void Area_C()
		{
			cout<<"\nArea of Circle is :"<<PI*Rad*Rad;
		}
		void Para_C()
		{
			cout<<"\nParameter of Circle is :"<<2*PI*Rad;
		}
};
int main()
{	
	int ch;
	while(1)
	{
		cout<<"\n\n\n================WELCOME TO SHAPES=================\n";
		cout<<"\n1.Square\n2.Rectangle\n3.Circle\n4.Exit\n*Enter your Choice :";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					Sqr s1(0);
					cout<<"Enter Square Details ";
					s1.Get_Len();
					s1.Sqr_L();
					s1.Cube();
				}break;
			case 2:
				{
					Rec r1(0,0);
					cout<<"Enter Rectangle Details ";
					r1.Get_Len();
					r1.Get_Wid();	
					r1.Para_R();
					r1.Area_R();
				}break;
			case 3:
				{
					Circ c1(0);
					cout<<"Enter Circle Details ";
					c1.Get_Rad();	
					c1.Para_C();
					c1.Area_C();
				}break;
			case 4:
				exit(0);
			default:
				cout<<"Enter Correct Choice !";
		}	
	}
	return 0;
}

