using namespace std;
#include <iostream>
//
inline void max(int x,int y)
{
	if(x>y)
	{
		cout<<"x is greater";
	}
	else
	{
		cout<<"y is greater";
	}
}
main()
{
	int x,y;
	cout<<"inter value of x :";
	cin>>x;
	cout<<"inter value of y :";
	cin>>y;
	max(x,y);
}
