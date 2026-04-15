#include<iostream>
using namespace std;
class Student
{
	public:
		char * stdname;
		int age;
		//Do not add any member function.
		//Write whole code in main() only.
};
int main()
{
	/*5.For given class Student,Scan and print data of 2 students.
	class Student
	{
		public:
			char * stdname;
			int age;
			//Do not add any member function.
			//Write whole code in main() only.
	};*/
	
	Student std,std2;
	std.stdname = new char[20];
	std2.stdname= new char[20];
	cout<<"\nEnter name =";
	cin.getline(std.stdname,20);
	cout<<"\nEnter age =";
	cin>>std.age;
	cin.ignore(1);

	
	
	cout<<"\nEnter name =";
	cin.getline(std2.stdname,20);
	cout<<"\nEnter age =";
	cin>>std2.age;
	cin.ignore(1);

	cout<<"\nName = "<<std.stdname<<"\nage ="<<std.age;
	cout<<"\nName = "<<std2.stdname<<"\nage ="<<std2.age;
}
