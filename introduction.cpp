using namespace std;
#include <iostream>
// Base class 
class myfamily {
  public:
    void myintro()
	{
      cout << "My family introduction"<<endl;
    }
};
// Derived class
class myparent: public myfamily 
{
	public:
	void myfather()
	{
		cout<<"MY father name : Dr Prasad"<<endl;
	    cout<<"His occupation : Doctor"<<endl;
	}	
};
//Another Derived class
class Child: public myparent
{
	public:
	void myself()
	{
		cout<<"Myname : Mr Prasad"<<endl;
		cout<<"My occupation : Engineer"<<endl;	 
	}	
};
int main() {
  Child myobj;
  myobj.myintro();
  myobj.myfather();
  myobj.myself();
  cout<<"...thanks.....";
  return 0;
}

