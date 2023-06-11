using namespace std;
#include <iostream>
 class parent1
 {


 	
 	
 	public:
 		add(int a,int b)
 		{
 			
 		    cout<<(a+b)<<endl;
 			
		 }
	
 };
 class parent2
 {
 	public:
 		sub(int a,int b)
		{
			
			cout<<(a-b);
		}
 	
 	
 };
 class child:public parent1,parent2
 {
 	
 };
 main()
 {
 	int x,y;
 	cout<<"inter 1st value :";
 	cin>>x;
 	cout<<"inter 2nd value :";
 	cin>>y;
 	child s1;		
 	s1.add(x,y);
 	s1.sub(x,y);
 }
