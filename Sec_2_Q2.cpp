#include<iostream>
using namespace std;
class Number
{
	private:
		int x;
		void scandata()
		{
			cout<<"\nEnter x =";
			cin>>x;
		}
		void printdata()
		{
			cout<<"\n X :"<<x;
		}
		friend int main();
};
int main()
{
	/*2.
	class Number
	{
		private:
			int x;
			void scandata();
			void printdata();
	};
	int main()
	{
		//Scan and print data of one object of Number.
	}*/
	Number obj;
	
	obj.scandata();
	obj.printdata();
	
	return 0;
}
