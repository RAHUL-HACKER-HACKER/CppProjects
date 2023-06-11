using namespace std;
#include <iostream>
class base
{
	public:
		virtual void disp()
		{
			cout<<"this is a base class disp fn"<<endl;
		}
		virtual void show()
		{
			cout<<"this is a bace class show fn"<<endl;
		}
		
	
};
class derived:public base
{
	public:
		void disp()
		{
			cout<<"this is a derived class disp fn"<<endl;
			
		}
		void show()
		{
			cout<<"this is a derived class show fn"<<endl;
		}
};
main()
{
	base* b;
	base objb;
	b=&objb;
	b->disp();
	b->show();
	derived objd;
	b=&objd;
	b->disp();
	b->show();
	
}
