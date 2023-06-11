#include<iostream>
#include<windows.h>
#include<ctime>
//#include <bits/stdc++.h>
using namespace std;
void print(){
	int n;
	srand(time(0));
	n=rand()%1000;//reminder(%) value 1 to 999

	
	string x;
	cout<<"Do you want to scratch lucky card press(yes/no):";
	cin>>x;
	if(x=="yes"||x=="y"){

	cout<<endl<<"processing------"<<endl;
	
	Sleep(3000);//use for pause 3 second
	
		cout<<"Congratulation!!!\nHello MR/MS You win  "<<n<<"$ dollor"<<endl;
		
		system("pause");//use for pause
		
	 }
	 else if(x=="no"||x=="n"){
	 	cout<<endl<<"thanks Have a nice day----";
	 	
	 	exit(0);//use for exit from programm;
	 }
	 cout<<endl<<"oops!!!!please enter valid value"<<endl;
	 
     print();//use for looping
	 
}
	
int main(){
	print();

	
		
	return 0;
}

