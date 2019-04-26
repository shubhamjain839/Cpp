
#include<iostream>
using namespace std;
int main()
{
	int a[20][20],b[20][20];
	int n,i,j;
	cout<<"Enter order of matrix";
	cin>>n;
	cout<<"Enter "<<n*n<<" elements:";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	
	}
		cout<<"you entered: "<<endl;
			for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		cout<<a[i][j]<<"  ";
		}
	cout<<endl;
	}
		
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
			//cout<<b[i][j];
		}
		//cout<<endl;
	}
	cout<<"Transpose is: "<<endl;
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			//b[i][j]==a[j][i];
			cout<<b[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
}

