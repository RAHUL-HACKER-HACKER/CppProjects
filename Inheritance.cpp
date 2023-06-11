using namespace std;
#include <iostream>
//opps (inheritance)
//basic class
class myfamily
{
	public:
		
	    void myintro()
	    {
	    
		    cout<<"my family introduction"<<endl;
       	}
};
//drived class
class myparent:public myfamily
{
	public:
		void myfather()
		{
			cout<<"my father name : Dr Prasad"<<endl;
			cout<<"His occupation : Doctor"<<endl;
			
		}
};
//another drived class
class child:public myparent
{
	public:
	void myself()
	{
		cout<<"my name : Mr Kumar"<<endl;
		cout<<"my occupation : Engineer"<<endl;
	}
	
};
int main()
{
	child myobj;
	myobj.myintro();
	myobj.myfather();
	myobj.myself();
	return 0;
}
