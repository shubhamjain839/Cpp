#include<iostream>
using namespace std;
class first
{
	public:

		int i,n,arr[10];
	
	
	void  getdata()
	{
		
		cout<<"Enter how many elements:";
		cin>>n;
		cout<<"Enter "<<n<<"  array elemnts:"<<endl;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
	}
};
class second : public first
{
	public:
		
		void sum()
		{
		long int sum=0;
		for(i=0;i<n;i++)
		{
		
		sum=sum+arr[i];
	}
		cout<<endl<<"Sum is"<<sum;
		}
	
	};

int main()	
{	
 	second s1;
	 s1.getdata();
	 s1.sum();
	 //s1.showdata();
	return 0;
}
