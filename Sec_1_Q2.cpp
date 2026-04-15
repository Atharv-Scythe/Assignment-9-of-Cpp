#include<iostream>
using namespace std;
class Number
{
	private:
		int x,y;
		void scan();
	public:
		void print();
	//Do not add your own memberfunction.
};
int main()
{
	
	/*2.
	class Number
	{
		private:
			int x,y;
			void scan();
		public:
			void print();
	//Do not add your own memberfunction.
	}
	int main()
	{
		//Scan and print data for 2 objects.
	}
	*/
	Number a,b;
	a.print();
	b.print();
	
	
}
void Number :: print()
{
	scan();
	
	cout<<"\nx :"<<x<<" y :"<<y<<endl;
}
void Number :: scan()
{
	cout<<"Enter x and y :";
	cin>>x>>y;
}
