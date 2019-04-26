#include<iostream>
#define PI 3.14
using namespace std;
class Base{
	public :
		int Len;
		void Get_Len(int xLen){
			Len=xLen;
		}
		virtual void Area(){
			cout<<"Area is :"<<Len*Len;
		}
};
class Der:public Base{
	public:
		void Area(){
			cout<<"Area is :"<<PI*Len*Len;
		}
};
int main(){
	Base bobj,*bptr;
	Der dbj;
	bptr=&dbj;
	bobj.Get_Len(9);
	bptr->Get_Len(10);
	bobj.Area();
	bptr->Area();
	return 0;
}
