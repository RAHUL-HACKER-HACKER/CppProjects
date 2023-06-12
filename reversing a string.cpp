using namespace std;
#include<iostream>
 main()
 {
 	int i;
 	string a;
 	cout<<"inter revesing  string :";
 	cin>>a;
 	cout<<endl<<"revese string of "<<a<<" is ";
 	i=a.length();
 	while(i>=0)
 	{
 		cout<<a[i];
 		i-=1;
	}
 }
