#include<iostream>
using namespace std;
void pattern(int n,int m){
	int b,c,d,e,f,g;
	string a;
	if(1==m){
		a=" ";
		b=0;
		c=-1;
		e=1;
		d=1;
		f=1;
		g=0;
			
		}
	else if(2==m){
		a="";
		b=0;
		c=-1;
		e=1;
		d=1;
		f=1;
		g=0;
	}
	else if(3==m){
		a="";
		b=n;
		c=1;
		e=1;
		d=1;
		f=1;
		g=0;
		
		
	}
	else if(4==m){
		a=" ";
		b=n;
		c=1;
		d=0;
		e=-1;
		f=1;
		g=0;
		
		
	}
	else if(5==m){
		a=" ";
		b=n;
		c=1;
		d=0;
		e=-1;
		f=2;
		g=1;
		
}
    else if(6==m){
		a=" ";
		b=0;
		c=-1;
		e=1;
		d=1;
		f=2;
		g=1;
			
		}

	
	//main program
	for(int i=n;i>=1;i--){
		
		for(int j=1;j<=(d*n-e*i);j++){
			cout<<a;
			
		}
		
		for(int k=1;k<=f*(b-c*i)-g;k++){
		
		cout<<"*";
		
  }
		cout<<endl;
	
	
	}
	
	
	
}

main(){
	
	
	int n,m;
	cout<<"enter num of row n : ";
	cin>>n;
	
	cout<<"enter change pattern code m(1 to 6 or exit) : ";
	cin>>m;
	while(m>=1&&m<=6){
		pattern(n,m);
		cout<<"enter change pattern code m(1 to 6 or exit) : ";
	    cin>>m;
		
	}
	cout<<endl<<"you have exited !";
	cout<<endl<<"------thanks for using--------";
	
}
	
	
	
	
	
	                                           
	

