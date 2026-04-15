#include<iostream>
using namespace std;
class Digit
{
	public:
		void getdata();
};
class Number
{
	int x,y;
	friend void Digit :: getdata();
};

void Digit :: getdata()
{
	Number obj;
	cout<<"\nEnter x and y =";
	cin>>obj.x>>obj.y;
	
	cout<<"\nX :"<<obj.x<<" Y :"<<obj.y;
}
int main()
{
	/*1.
	class Number
	{
		int x,y;
	};
	class Digit
	{
		public:
			void getdata()
			{
				Number obj;
				//scan and print obj here.
			}
	};
	main()
	{
		Digit D;
		D.getdata();
	}*/
	Digit D;
	D.getdata();
}
