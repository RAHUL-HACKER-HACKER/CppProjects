using namespace std;
#include<iostream>
//template use to addition of int and double values
template <class temp1,class temp2>class add

{
	public:
		temp1 a;
		temp2 b;
		add(temp1 x,temp2 y)
		{
			a=x;
			b=y;
		}
		
		
	    void disp()
	    {
		
		    
	        cout<<a+b;
	
		
	    }
	
};

main()
{
	add<int,int> d1(123,456);
	add <double,double> d2(123.45,567.89);
	cout<<"sum of int values :";
	d1.disp();
	cout<<endl<<"sum of double values :";
	d2.disp();
}
