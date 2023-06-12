#include<iostream>
using namespace std;

void swap(int* a,int* b ){
	int temp=*a;
	*a=*b;
	*b=temp;
	
	
}
main(){
	int a=100;
	int b=200;
	//int* ptr1=&a;
	//int* ptr2=&b;
	//swap(ptr1,ptr2);
	//without pointer value can not swap
	swap(&a,&b);
	cout<<"a="<<a<<"\n"<<"b="<<b;
}
