using namespace std;
#include <iostream>
 class addition
 {
    public:
 		add(int a,int b)
 		{
 			
 		    cout<<"sum of a and b : "<<(a+b)<<endl;
 			
		}
 };
 class subtraction
 {
 	public:
 		sub(int a,int b)
		{
			
			cout<<"sub of a and b : "<<(a-b)<<endl;
		}
			
 };
 class detail:public addition,public subtraction
 {
 	
 };
 main()
 {
 	int x,y;
 	cout<<"inter 1st value :";
 	cin>>x;
 	cout<<"inter 2nd value :";
 	cin>>y;
 	detail d;		
 	d.add(x,y);
 	d.sub(x,y);
 }
