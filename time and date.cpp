#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>


main(){
	
	time_t now=time(0);
	char* dt=ctime(&now);
	cout<<"current time : "<<dt;
	
	
	
	
	
	
	
}

