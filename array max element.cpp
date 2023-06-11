#include<iostream>
using namespace std;

void max(int n,int a[]){
	int m=a[0];
	for(int i=0;i<n;i++){
		
		if(a[i]>m){
			
			m=a[i];
		}
		
	}
	cout<<endl<<"max value of array :"<<m;
}



main(){
	int n,c;
	cout<<endl<<"enter size of array :";
	cin>>n;
	int a[n];
	cout<<endl<<"enter values of array :";
	for(int i=0;i<n;i++){
		cin>>c;
		a[i]=c;
		
	}
	max(n,a);
	
	
	
	
}
