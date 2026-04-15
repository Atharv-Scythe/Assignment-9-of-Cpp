#include<iostream>
using namespace std;
int main()
{
	//2.Scan n characters from user.Count uppercase alphabets only from given input.
	
	int n;
	cout<<"\nEnter the number of characters you want in the array =";
	cin>>n;
	
	char *p;
	
	p=new char[n];
	
	cout<<"\nEnter "<<n<<" Number of characters =";
	int i,calpha = 0;
	
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
		
		if(*(p+i)>='A' && *(p+i)<='Z')
		{
			calpha++;
		}
	}
	
	cout<<"\nThe number of uppercase letters ="<<calpha;
	
	return 0;
}
