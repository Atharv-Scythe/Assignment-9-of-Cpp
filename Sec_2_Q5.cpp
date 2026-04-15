#include<iostream>
using namespace std;
class Number
{
	int x;
	friend class Digit;
};
class Digit
{
	private:
		void show(Number num)
		{
			cout<<"\nEnter x for Num =";
			cin>>num.x;
			cout<<"\nEntered x for num = "<<num.x;
			
		}
	public:
		void disp()
		{
			Number num;
			show(num);
		}
};

int main()
{
	/*5.
	class Number
	{
		int x;
		//do not add member function here.
	};
	class Digit
	{
		private:
			void show()
			{
				Scan and print an object of Number here.
				Number num;
				cin>>num.x;
				cout<<num.x;
			}
		public:
			void disp();
	};*/
	
	Digit d;
	d.disp();
	
	return 0;
	
}
