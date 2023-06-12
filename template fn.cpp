using namespace std;
#include <iostream>
template <class temp1,class temp2> temp1 disp(temp1 a,temp2 b)
{
	temp1 t;
	t=a+b;
	cout<<"sum of a and b : "<<t<<endl;
	//return 0;
}
main()
{
	int x=100,y=200;
	double l=123.4,m=567.8;
	disp(x,y);
	disp(l,m);
	
}
