#include<iostream>
using namespace std;
class base
{
	int a=100;
	public:
		base()
		{
			cout<<"constructed object ";
			cout<<a<<endl;
		}
		~base()
		{
			cout<<"now distructed object ";
			cout<<a<<endl;
		}
		
};
main()
{
	 
	base b;
	
}
