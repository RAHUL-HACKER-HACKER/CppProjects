#include<iostream>
using namespace std;
// program to check a number is prime or not
main()
{
	int n,i;
	int temp=0;
	cout<<"Enter the numebr :";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			temp=1;
			break;
		}
	}
	if(temp==1)
	{
		cout<<n<<" is NOT Prime";
	}
	else
	{
		cout<<n<<" is  Prime";
	}
}
