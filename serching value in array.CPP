#include<iostream>
using namespace std;
//pasing array as argument
//searching an array  element in called function
int search(int x, int val[], int length)
{
	int flag=0;
	cout<<endl<<"The received array values...."<<endl;
	for(int i=0;i<length;i++)
	{
		cout<<" a["<<i<<"] :"<<val[i]<<endl;
	}
	for( int i=0;i<length;i++)
	{
		if(x==val[i])
		{
			flag=1;
			break;
		}
	}
	return flag;

}

int main()
{
	int a[25];
	int l,e,i;
	int result;
	cout<<"Enter the size of array :";
	cin>>l;
	cout<<endl<<"Enter the array elements"<<endl;
	for(i=0;i<l;i++)
	{
		cout<<"Enter a["<<i<<"] :";
		cin>>a[i];
	}
	cout<<endl<<"Enter the value to search :";
	cin>>e;
	result=search(e,a,l);
	if(result==1)
	{
		cout<<endl<<"The value is found";
	}
	else
	{
		cout<<endl<<"The value is NOT found";
	}
	return 0;
}
