using namespace std;
#include <iostream>
class base
{
	
	int a,b;
	public:
		
		void input()
		{
			cout<<"inter value of a : ";
			cin>>a;
			cout<<endl<<"inter value of b : ";
			cin>>b;
		}
		friend void add(base obj1);
};

	    void add(base obj1)
		{
			int sum;
			sum=(obj1.a)+(obj1.b);
			cout<<"sum of a and b : "<<sum;
		}

main()
{
	base obj2;

	obj2.input();
	add(obj2);
}
