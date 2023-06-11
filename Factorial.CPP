using namespace std;
#include<iostream>
//factorial of a given number
main()
{
	int n,i,fact=1;
	
	cout<<"Enter the Integer number :";
	cin>>n;
	if(n<0)
	{
		cout<<"Factorial of "<<n<<" is :1";
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		cout<<"Factorial of "<<n<<" is :"<<fact;
	}
}
