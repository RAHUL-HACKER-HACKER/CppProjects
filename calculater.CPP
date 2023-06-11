#include<iostream>
#include<cstdlib>
using namespace std;
void calculator(int m){
	    int a,b,c;
	    int n=m;
	    
		if(n!=5)
		{
			cout<<endl<<"Enter value for A :";
		    cin>>a;
		    cout<<endl<<"Enter Value for B :";
		    cin>>b;
		}

		switch(n)
		{
			case 1:
				c=a+b;
				cout<<"The result is: "<<c;
				break;
			case 2:
				c=a-b;
				cout<<"The result is: "<<c;
				break;
			case 3:
				c=a*b;
				cout<<"The result is: "<<c;
				break;
			case 4:
				c=a/b;
				cout<<"The result is: "<<c;
				break;
			case 5:
				cout<<endl<<"thanks-----";
				exit(0);
				
		}
	
	
	
	
}
int main(){
	int m;
	    
		cout<<endl<<" 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Exit"<<endl;
		
		cout<<endl<<"Enter the Choice :";
		cin>>m;
		
	while(m){
		if(m<=5&&m>=1){
		
		    calculator(m);
		    cout<<endl<<"Enter the Choice :";
		    cin>>m;
			
			
		}
		else{
			cout<<endl<<"please enter a valied no";
		    cout<<endl<<"Enter the Choice :";
		    cin>>m;
		
		    
			
		}
		
	}
	

	return 0;
}

