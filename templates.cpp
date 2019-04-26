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
template <typename M, typename U>
class Engn : public Person <M> {
	U exp,sal;       
	public :
		Engn(M t_hgt, M t_wgt, M t_age,U t_exp,U t_sal) : Person<M>(t_hgt,t_wgt,t_age){
			exp=t_exp;
			sal=t_sal;
		} 
		void print_Ed(){
			cout<<endl<<"Engineer's height :"<<get_hgt()<<endl<<"Engineer's weight :"<<get_wgt()<<endl<<"Engineer's age :"<<get_age()<<endl;
			cout<<"Engineer's experience :"<<exp<<"Engineer's salary :"<<sal<<endl;
		}
};
int main(){
	Person<int> p1(172,58,21);
	Engn<int,float> e1(143,45,44,2.5,5.5);
	p1.print_Pd();
	e1.print_Ed();
	return 0;	
}
