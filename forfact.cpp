#include<iostream>
using namespace std;
int main()
{
	
		int num,i;
		long int fact=1;
		cout<<"Enter a number :";
		cin>>num;
		cout<<"factorial is :";
		for(i=num;i>=1;i--)
		{
			fact=fact*i;
			//i++;
		}
		cout<<fact;
		return 0;
				
}
