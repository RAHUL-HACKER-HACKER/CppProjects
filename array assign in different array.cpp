#include<iostream>
using namespace std;

int main(){
	int arr[]={3,6,9,12,15};
	//arr assign in different array a;
	int* a=arr;
	
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		
		cout<<a[i]<<" ";
		//or use a++
	}
	
	
	
	

	


return 0;
}
