using namespace std;
#include <iostream>
main()
{
	int a[10],n;
	cout<<"size of array :";
	cin>>n;
	cout<<endl<<"inter values of array";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl<<"your array value :";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		
	}
}
