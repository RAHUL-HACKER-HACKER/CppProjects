#include<iostream>
using namespace std;
//static use to locating same memory of variable a and b for all class member fn
class info{
	  int a;
	  //static int a;
	  int b;
	  //static int b;
	 public:
	 info(int x,int y){
	 	a=x;
	 	b=y;
	 	
	 	
	 }
	 void disp(){
	 	cout<<"value of a :"<<a<<endl;
	 		cout<<"value of b :"<<b<<endl;

	 	
	 	
	 }
	
	
	
};
//int info::a;
//int info::b;
int main(){
	
	info obj1(100,200);
	info obj2(300,400);
	
	obj1.disp();
	
	obj2.disp();
	

	
	
	
}
