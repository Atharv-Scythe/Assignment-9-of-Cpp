#include<iostream>
using namespace std;
class Power;
class Base
{
	int b;
	public:
		void scanb()
		{
			cout<<"\nEnter base =";
			cin>>b;
		}
		friend void calc(Base , Power);
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
		friend void calc(Base , Power);
};
void calc(Base base, Power power)
{
	int i,ans=1;
	for(i=1;i<=power.p;i++)
	{
		ans *=base.b;
	}
	
	cout<<"\nAns ="<<ans;
}
int main()
{
	/*3.
	class Base
	{
		int b;
	};
	class Power
	{
		int p;
	};
	void calc(parameter list)
	{
		//calculate base^power here, using objects created in main.
	}
	int main()
	{
		Base base;
		Power power;
	}*/
	
	Base base;
	base.scanb();
	Power power;
	power.scanp();
	calc(base,power);
}
