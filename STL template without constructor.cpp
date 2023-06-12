using namespace std;
#include <iostream>
template<class x,class y>class disp
{
	public:
		
		void add(x a,y b)
		{
			cout<<"value of a and b : ";
			cout<<a<<","<<b;
			
		}
		
};
main()
{
	disp<int,float> d;
	
	int a=100;
	
	float b=200.23;
	
	d.add(a,b);
	
	
}
