#include<iostream>
using namespace std;
class Student
{
	private:
		char stdname[20];
		int age;
	public:
		void scan()
		{
			cout<<"\nEnter name =";
			cin.getline(stdname,20);
			cout<<"\nEnter age =";
			cin>>age;
			cin.ignore(1);
		}
		void show()
		{
			cout<<"\nName :"<<stdname<<"\nAge ="<<age;
		}
};
int main()
{
	/*4.For given class Student,Scan and print data of 2 students.
	class Student
	{
		private:
			char stdname[20];
			int age;
		public:
			//your member functions here.
	};*/
	
	Student std1,std2;
	std1.scan();
	std2.scan();
	
	std1.show();
	std2.show();	
	
}
