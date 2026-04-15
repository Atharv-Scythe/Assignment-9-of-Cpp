#include<iostream>
using namespace std;
class Number
{
	private:
	int x,y;
	void addition(Number a, Number b)
	{
		x= a.x + b.x;
		y= a.y + b.y;
	}
	public:
		void scan()
		{
			cout<<"\nEnter x and y :";
			cin>>x>>y;
		}
		void print()
		{
			cout<<"\nX :"<<x<<" Y :"<<y;
		}
		void myfun(Number a, Number b)
		{
			addition(a,b);
		}
		
};
int main()
{
	/*4.
	class Number
	{
		int x,y;
		void addition(parameter list);
		public:
			void scan();
			void print();
			void myfun(parameter list);
		//Do not add your own memberfunction.		
	};
	int main()
	{
		//Perform T3 = T1 + T2 for given class Number.
	}*/
	Number a,b,add;
	
	a.scan();
	b.scan();
	
	add.myfun(a,b);
	
	add.print();
}
