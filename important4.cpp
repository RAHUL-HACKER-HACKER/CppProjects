#include<iostream>
using namespace std;
class info{
	string  a="value of a";
	int b=5000;
	public:
	void disp(){
		cout<<a<<endl;
		cout<<b;
		
		
	}
	
	
	
	
};
int main(){
	info obj;
	//obj.disp(); //by object
	
	//obj.info::disp(); //by resolution operator
	
	//info &obj2=obj; //by reference
	//obj2.disp();
	
//	info obj3=obj; //by copy
//	obj3.disp();

//     info *obj4=&obj; // by pointer
//     obj4->disp();
       
//       info *obj5=new info;
//       obj5->disp();
      
 //      info *obj5=new info();
//       obj5->disp();
     
     
	
	
	
	
}
