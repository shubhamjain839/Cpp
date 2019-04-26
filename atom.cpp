#include<iostream>
using namespace std;
class Atom{
	int Mol;
	public:
		Atom(){
			Mol=0;
		}
		void get_Mol(int xMol){
			Mol=xMol;
		}
		int pass_Mol(){
			return Mol;
		}
};
class Electron:public Atom{
	int Val;
	public:
		Electron(){
			Val=0;
		}
		void get_Val(int xVal)
		{
			Val=xVal;
		}
		int pass_Val(){
			return Val;
		}
		int A_V(){
			int temp=0;
			if (pass_Mol()==0)
				temp=1;
			else
				temp=pass_Mol();
			return (Val*temp);
		}
};
class Hyd:public Electron{
	int Num;
	public:
		Hyd(){
			Num=0;
		}
		void get_Num(){
			Num=pass_Val()*A_V();
		}
		void disp(){
			cout<<"Count :="<<Num;
		}
};
int main(){
	Hyd h1;
	h1.get_Mol(20);
	cout<<"Value of Mol is :"<<h1.pass_Mol();
	h1.get_Val(10);
	cout<<"\nValue of Val is :"<<h1.pass_Val();
	h1.get_Num();
	cout<<"\n";
	h1.disp();
	return 0;
}
