#include<iostream>
#include<string>
using namespace std;
struct fee{
	string fee_type;
	int amt;
};
class Hostel{
	public :		
		int room_no,block_no,mess;			
};
class Boys : public Hostel{
	public :
		int hostel_no;
		int roll_no;
		struct fee info;
		string vehicle_no;
};
struct B1{
	Boys member;
	struct B1 *next;
}; 
struct B2{
	Boys member;
	struct B2 *next;
};
struct B3{
	Boys member;
	struct B3 *next;
};
struct B4{
	Boys member;
	struct B4 *next;
};
void new_hostler();
{
	int num,code;
	cout<<endl<<"Which Hostel (Girls=0/Boys=1 & Number ) :";
	cin>>num>>code; 
	if(code==0){	
		switch (num){
			case 1:{
				struct B1 *tmp;
				tmp=(struct B1*)malloc(sizeof(struct B1));
				break;
			}
			case 2:{
				struct B2 *tmp;
				tmp=(struct B2*)malloc(sizeof(struct B2));
				break;
			}
			case 3:{
				struct B3 *tmp;
				tmp=(struct B3*)malloc(sizeof(struct B3));
				break;
			}
			case 4:{
				struct B4 *tmp;
				tmp=(struct B4*)malloc(sizeof(struct B4));
				break;
			}
			default :
				cout<<"Hostel does'nt exist";
		}
	}
	else {	
		switch (num){
			case 1:{
				break;
			}
			case 2:{
				break;
			}
			case 3:{
				break;
			}
			case 4:{
				break;
			}
			default :
				cout<<"Hostel does'nt exist";
		}
		
	}
}
int main(){
	return 0;
}
