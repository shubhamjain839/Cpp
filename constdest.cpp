 
#include<string>
#include<iostream>
using namespace std;
class string1 : public string 
{
	string name;
	int len;
	public:
		string1(string s)
		{
			len=s.length();
			name.copy(s,len,0);
		}
		void compare(string &ss2)
		{
			int k;
			k=strcmp(name,ss2.name);
			if(k==0)
			cout<<"\nBoth objects have samw name";
			else
			cout<<"\nboth objects have different name";
		}
		void display()
		{
			cout<<"\nName of person= "<<name;
		}
		~string1()
		{
			cout<<"\nRelease memory allocated to " <<name;
			delete[] name;
		}
};
int main()

{
	string1 s1("Arsh");
	string1 s2("Prachi");
	s1.display();
	s2.display();
	s1.compare(s2);
	return 0;
}
