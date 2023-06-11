#include<iostream>
using namespace std;
//dynamic array auto create auto a new array if array size is less
main(){
	int n;
	int* dyarr=new int[10];
	for(int i=0;i<=10;i++){
		cin>>n;
		dyarr[i]=n;
		
	}
	for(int i=0;i<=10;i++){
		
	cout<<dyarr[i]<<" ";
}
}
