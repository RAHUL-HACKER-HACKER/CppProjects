using namespace std;
#include <iostream>
int main()
{
	int a[10],n,i,sum;
	sum=0;
	cout<<"inter size of input:";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cout<<"inter "<<(i+1)<<" value:";
		cin>>a[i];
	}
    cout<<"your all values"<<endl;
	for(int i=0;i<n;i++)
	{
	
		cout<<a[i]<<" ";
		sum=sum+a[i];
		
		
	}
	cout<<endl<<"sum of all values"<<endl;
	cout<<sum;
	return 0;
}
