using namespace std;
#include<iostream>
class base{
	int a;
	int b;
	public:
	base(){
		a=0;
		b=0;
		
		
	}
	base(int x,int y){
		
		a=x;
		b=y;
	}
	void disp(){
		
		//sum of complex number
		cout<<"sum  of (a1+ib1) and (a2+ib2) :"<<a<<"+i"<<b;
		
	}
	base operator +(base obj){
		base temp;
		temp.a=a+obj.a;
		temp.b=b+obj.b;
		
		return temp;
		
	}
	
	
};
int main(){
	base b1(70,160),b2(30,40),b3;
	b3=b1+b2;
	b3.disp();
	
	
	return 0;
}
