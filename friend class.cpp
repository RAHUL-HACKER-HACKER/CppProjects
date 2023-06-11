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
		friend class derived;
};
class derived
{
	public:
		add(base obj)
		{
			int sum;
			sum=(obj.a)+(obj.b);
			cout<<"sum of a and b : "<<sum;
		}
};
main()
{
	base obj;
	derived d;
	obj.input();
	d.add(obj);
}
