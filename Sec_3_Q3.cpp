#include<iostream>
using namespace std;
class Student
{
	public:
		char stdname[20];
		int age;
		//Do not add any member function.
		//Write whole code in main() only.
};
int main()
{
	/*3.For given class Student,Scan and print data of 2 students.
	class Student
	{
		public:
			char stdname[20];
			int age;
			//Do not add any member function.
			//Write whole code in main() only.
	};*/
	
	Student std;
	cout<<"\nEnter Student name =";
	cin.getline(&std.stdname[0],20,'\n');
	
	cout<<"\nEnter age=";
	cin>>std.age;
	
	cout<<"\nName : "<<std.stdname<<"\nAge ="<<std.age;
	
	return 0;
}
