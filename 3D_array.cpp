#include<iostream>
using namespace std;
//3D array
main(){
	//int arr[3][2][2]={{{1,2},{3,4}} , {{5,6},{7,8}} , {{9,10},{11,12}}};
	int arr[3][2][2];
	for(int k=0;k<3;k++){
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				
				cout<<"arr["<<k<<"]"<<"["<<i<<"]"<<"["<<j<<"] : ";
				
				cin>>arr[k][i][j];
				cout<<endl;
			}
			
			cout<<endl;
			
		}
		
		cout<<endl<<endl;
		
	}
	
	
	
	
	
	
				   
	for(int k=0;k<3;k++){
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				
				cout<<arr[k][i][j]<<" ";
			}
			
			cout<<endl;
			
		}
		
		cout<<endl<<endl;
		
	}
	
}
