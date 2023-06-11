#include<iostream>
using namespace std;
void arr(string val,int b[],int n){
	int m=b[0]; 
	//int n=sizeof(b)/sizeof(b[0]);
	cout<<"size of array :"<<n;
    if("max"==val){
	
	    for(int i=0;i<n;i++){
		
		       if(b[i]>m){
			
		         	m=b[i];
		        }
		
	     }
	cout<<endl<<"max value of array :"<<m;
       }
    
	else if("min"==val){
	
	    for(int i=0;i<n;i++){
		
		       if(b[i]<m){
			
		         	m=b[i];
		        }
		
	     }
	cout<<endl<<"min value of array :"<<m;
       }
		
			
		
	
}




main(){
	int a[]={3,4,5,6,2,10,9};
	int n=sizeof(a)/sizeof(a[0]);
	arr("min",a,n);
	
	
	
	
}
