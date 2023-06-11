//namespace(class)
using namespace std;
//headers(library)
#include <iostream>
#include<string>
//function
int add(int a,int b){
	int sum=a+b;
	return sum;
}
int main()
{
	int a,b;
	string str;
	cout<<"enter value a:";
	cin>>a;
	cout<<"enter value b:";
	cin>>b;
	//print value
	int sum=add(a,b);
	cout<<"value of a:"<<sum;
	return 0;
	
	
}
