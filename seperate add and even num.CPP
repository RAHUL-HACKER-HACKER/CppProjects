#include<iostream>
using namespace std;
//separete series of ODD and EVEN numbers for a given lenght
main()
{
	int n,i;
	cout<<"Enter the lenght :";
	cin>>n;

	cout<<"The ODD number series...."<<endl;
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			cout<<i<<endl;
		}
	}
	cout<<"The EVEN number series...."<<endl;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<i<<endl;
		}
	}
}
