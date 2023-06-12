using namespace std;
#include<iostream>
class base 
{
	public:
		
		string s1="---thanks--";
		string s2="---good day--";
		void disp()
		{
	
			cout<<"disp fn variable derived inside class ";
			
		}
		void show();
		
};
void base::show()
{
	
	cout<<endl<<"show fn variable derived outside class ";
	cout<<endl<<base::s1;
	cout<<endl<<s2;
}
main()
{
	base obj;
	obj.disp();
	obj.show();
}
