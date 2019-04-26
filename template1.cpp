#include<iostream>
using namespace std;

template <typename M>
class Person{
	M hgt,wgt,age;
	public :
		Person(M t_hgt,M t_wgt,M t_age){
			hgt=t_hgt;
			wgt=t_wgt;
			age=t_age;
		}
		M get_hgt();
		M get_wgt();
		M get_age();
		void print_Pd();
};
template <typename M>
M Person <M>::get_hgt(){
			return hgt;
		}
template <typename M>
M Person <M>::get_wgt(){
			return wgt;
		}
template <typename M>
M Person <M>::get_age(){
			return age;
		}
template <typename M>
void Person <M>:: print_Pd(){
	cout <<endl<<"Person's height :"<<hgt<<endl<<"Person's weight :"<<wgt<<endl<<"Person's age :"<<age<<endl;
}
int main(){
	Person<int> p1(172,58,21);
	p1.print_Pd();
	//e1.print_Ed();
	return 0;	
}
