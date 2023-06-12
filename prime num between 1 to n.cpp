using namespace std;
#include<iostream>
main()
{
	int n;
	cout<<"inter value : ";
	cin>>n;
	cout<<"prime number between 1 to "<<n<<"___"<<endl;
	for(int i=2;i<=n;i++)
	{
		int temp=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				temp+=1;
				//break;
			}
			
		}
		if(temp==0)
		{
			cout<<i<<",";
		}
		
		
		
	}
	
	
}
