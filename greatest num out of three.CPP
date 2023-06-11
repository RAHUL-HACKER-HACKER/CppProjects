#include<iostream>
using namespace std;
// program to fnd greatest among 3 values
main()
{
	int a,b,c;
	cout<<"Greatest Among 3 Integers"<<endl;
	cout<<"Enter the first No. A: ";
	cin>>a;
	cout<<"Enter the second No. B: ";
	cin>>b;
	cout<<"Enter the Third No. C: ";
	cin>>c;

	if((a>b)&&(a>c))
	{
		cout<<a<<" is greater than "<<b<< " and " <<c<<endl;
	}
	else if((b>a)&&(b>c))
	{
		cout<<b<<" is greater than "<<a<< " and " <<c<<endl;
	}
	else
	{
		cout<<c<<" is greater than "<<a<< " and " <<b<<endl;
	}
}
