#include<iostream>
using namespace std;
//program for creating an integer array
void create(int size)
{
	int i,a[25];
	int l=size;
	cout<<endl<<"Enter the array elements"<<endl;
	for(i=0;i<l;i++)
	{
		cout<<"Enter a["<<i<<"] :";
		cin>>a[i];
	}
	cout<<endl<<"The entered values...."<<endl;
	for(i=0;i<l;i++)
	{
		cout<<" a["<<i<<"] :"<<a[i]<<endl;
	}
}

main()
{
	int e,size;
	cout<<"Enter the size of array:";
	cin>>size;
	create(size);
}
