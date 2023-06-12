#include<iostream>
using namespace std;

template<class t>
void disp(t x,t y){
	
	cout<<"values of x and y :"<<x<<" , "<<y;
	
}

int main(){
	
	int x1=100,y1=200;
	string x2="rahul",y2="anand";
	float x3=100.20,y3=200.40;
	disp(x1,y1);
	cout<<endl;
	disp(x2,y2);
	cout<<endl;
	disp(x3,y3);
	
	return 0;
}

