#include<iostream>
using namespace std;
main()
//fibonacci serier for a given limit
{
	int n;
	int f1=0,f2=1,f3;
	cout<<"Enter the length of the series :";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<f1<<endl;
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
}
