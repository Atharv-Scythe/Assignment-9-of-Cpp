#include<iostream>
using namespace std;
int main()
{
	//1.Scan n integers from user.Find largest value of them.
	
	int *p;
	int n;
	cout<<"\nEnter the number of integers you want to enter iun array =";
	cin>>n;

	p = new int [n];
	cout<<"\nEnter "<<n<<" number of integers for array =";
	int i;
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	int max=*p;
	for(i=0;i<n;i++)
	{
		if(*(p+i)>max)
		{
			max = *(p+i);
		}
	}
	
	cout<<"\nlargest value in array entered ="<<max;
	return 0;
}
