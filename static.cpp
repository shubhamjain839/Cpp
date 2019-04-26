
 #include<iostream>
 using namespace std;
 class student
 {
 	private:
 		int rollno,marks;
 		static int tot_marks;
 	public:
 		void read()
 		{
 			cout<<"Enter rollno and marks :";
 			cin>>rollno>>marks;
 			
		 }
		 void cal()
		 {
		 	tot_marks+=marks;
		 }
	static void avg_per_marks(int n1)
	{
		double avg=double(tot_marks)/n1;
		cout<<"Average percentage of marks is = "<<avg;
		
	}
 };
 int student::tot_marks;
 int main()
 {
 	student s[50];
 	int n;
 	cout<<"Enter number of students: ";
 	cin>>n;
 	for(int i=0;i<n;i++)
 	{
 		s[i].read();
 		s[i].cal();
	 }
	 student::avg_per_marks(n);
	 return 0;
 }
 

