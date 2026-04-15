#include<iostream>
using namespace std;
class Calc;
class Base
{
	int b;
	friend class Calc;
	//do not add member function here.
};
class Power
{
	int p;
	friend class Calc;
	//do not add member function here.
};
class Calc
{
	
	private:
		int calculate(Base,Power);
		friend int main();
		//do not add member function here.
};
int Calc :: calculate(Base base, Power power)
{
	int i,ans= 1;
	cout<<"\nEnter base and power of the number =";
	cin>>base.b>>power.p;
	for(i=1;i<=power.p;i++)
	{
		ans *= base.b;
	}
	return ans;
}
int main()
{
	/*6.
	class Base
	{
		int b;
		//do not add member function here.
	};
	class Power
	{
		int p;
		//do not add member function here.
	};
	class Calc
	{
		private:
			int calculate();
			//do not add member function here.
	}
	*/
	Base base;
	Power power;
	Calc obj;
	int x = obj.calculate(base,power);
	//using calculate function find base^power.
	cout<<"\nThe answer = "<<x;
	
}
