#include<iostream>
using namespace std;
class Number
{
	private:
		int x,y;
		void scan();
		void print();
	public:
		static void scanfun(Number & , Number &);
		static void printfun(Number &, Number &);
	
};
int main()
{
	/*class Number
	{
		private:
			int x,y;
			void scan();
			void print();
		public:
			static void scanfun(parameter list);
			static void printfun(parameter list);
		//Do not add your own memberfunction.
		//scan x and y in scan() function only
		//print x and y in print() function only.
	}
	int main()
	{
		//Scan and print data for 2 objects.
	}*/
	
	Number a,b;
	Number :: scanfun(a,b);
	Number :: printfun(a,b);
	
}
void Number :: print()
{	
	cout<<"\nx :"<<x<<" y :"<<y<<endl;
}
void Number :: scan()
{
	cout<<"Enter x and y :";
	cin>>x>>y;
}
void Number :: scanfun(Number &a,Number &b)
{
	a.scan();
	b.scan();
}
void Number :: printfun(Number &a,Number &b)
{
	a.print();
	b.print();
}

