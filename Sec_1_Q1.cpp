#include<iostream>
using namespace std;
class Number
{
	private:
		int x,y;
	public:
		void scan();
		void print();
	//Do not add your own memberfunction.
};
			
int main()
{
	/*Q1.Read each question carefully and complete the code.
	Do not use friend function in any program given below.
	1.
		class Number
		{
			private:
				int x,y;
			public:
				void scan();
				void print();
		//Do not add your own memberfunction.
		}
		int main()
		{
			//Scan and print data for 2 objects.
		}
	*/
	
	Number a,b;
	
	a.scan();
	b.scan();
	a.print();
	b.print();
	
	return 0;
}
void Number :: scan()
{
	cout<<"Enter x and y =";
	cin>>x>>y;
}
void Number :: print()
{
	cout<<"x :"<<x<<" y :"<<y<<endl;
}
