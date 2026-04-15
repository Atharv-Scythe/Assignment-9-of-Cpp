#include<iostream>
using namespace std;
class Base
{
	int b;
	public:
		void scanb()
		{
			cout<<"\nEnter base =";
			cin>>b;
		}
		friend class Calc;
};
class Power
{
	int p;
	public:
		void scanp()
		{
			cout<<"\nEnter power =";
			cin>>p;
		}
		friend class Calc;
};
class Calc
{
	public:
		int calculate(Base base,Power power);
		
};
int Calc :: calculate(Base base,Power power)
{
	int i,ans=1;
	for(i=1;i<=power.p;i++)
	{
		ans *=base.b;
	}
	
	return ans;
}
int main()
{
	/*4.
	
	int main()
	{
		Base base;
		Power power;
		Calc obj;
		//using calculate function find base^power.
		//print answer in main().	
	}*/
	Base base;
	base.scanb();
	Power power;
	power.scanp();
	Calc obj;
	int ans = obj.calculate(base,power);
	
	cout<<"\nAnswer ="<<ans;
}
