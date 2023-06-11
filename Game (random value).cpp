//mind game

using namespace std;
#include <cstdlib>
#include <iostream>
#include <ctime>
void game()

{
	int n,r;
	srand(time(0));
	{
	
		r=rand()%10;
		cout<<"random values :"<<r<<endl;
    }
	
	cout<<"inter any value :";
	cin>>n;
		
		
	while(r!=n)
	{
		if(n<r)
		{
			cout<<"inter value are too low,try again"<<endl;
			cout<<"inter value  :";
	        cin>>n;
				
		}
		else
		{
			cout<<"inter value are too high,try again"<<endl;
			cout<<"inter value  :";
	        cin>>n;
		}
    }
    if(r==n)
    {
    	cout<<endl<<"Excellent!,you guessed the number";
	}
		
				
}
main()
{
	string a;
	game();
	cout<<endl<<"would like to play again(yes or no)? :";
	cin>>a;
	
	while(a=="yes")
	{
		game();
		cout<<endl<<"would like to play again(yes or no)? :";
		cin>>a;
	}
	if(a=="no")
	{
		cout<<endl<<"thanks";
	}
	
	
}

