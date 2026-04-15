#include<iostream>
using namespace std;
class Base
{
	private:
		int b;
	public:
		int giveb()
		{
			cout<<"\nEnter base :";
			cin>>b;
			return b;
		}
		
};
class Power
{
	private:
		int p;
	public:
		int givep()
		{
			cout<<"\nEnter power :";
			cin>>p;
			return p;
		}
		
};
int calc(int b,int p)
{
	int i,ans=1;
	for(i=1;i<=p;i++)
	{
		ans *= b;
	}
	return ans;
}
int main()
{
	/*5.
	class Base
	{
		private:
			int b;
		public;
			//You can add your own member functions
	};
	class Power
	{
		private:
			int p;
		public:
			//You can add your own member functions
	};
	int main()
	{
		Base base,power;
		//Calculate base^power in independannt function calc().
		//Print result in main().
		//Do not use friend function.
	}*/
	Power p;
	Base b;
	int gb,gp,ans;
	gb = b.giveb();
	gp = p.givep();
	
	ans = calc(gb , gp);
	
	cout<<"\nAnswer ="<<ans;
	
}
