using namespace std;
#include <iostream>
//pointer is a data type ,which store address of memory
main()
{
	//pointer for integer data type
	int a;
	a=100;
	int* ptr1;
	ptr1=&a;//storing address of a
	cout<<"value of a : "<<a<<endl;
	cout<<"value of a : "<<*&a<<endl;
	cout<<"value of a : "<<*ptr1<<endl;
	cout<<"memory address of a : "<<&a<<endl;
	cout<<"memory address of a : "<<ptr1<<endl<<endl;
	
	//pointer for string data type
	string b;
	b="rahul";
	string* ptr2;
	ptr2=&b;
	cout<<"value of b : "<<b<<endl;
	cout<<"value of b : "<<*&b<<endl;
	cout<<"value of b : "<<*ptr2<<endl;
	cout<<"memory address of b : "<<&b<<endl;
	cout<<"memory address of b : "<<ptr2<<endl<<endl;
	
	//pointer to pointer
	int** ptr3;
	ptr3=&ptr1;//storing address of ptr1
	cout<<"memory address of (memory address ptr1) : "<<ptr3<<endl;
	cout<<"value of a : "<<**ptr3;
	
	
	
}
