using namespace std;
#include <iostream>
main()
{
	int n;
	
	cout<<"inter number of voter : ";
	cin>>n;
	string a[n];
	for(int i=0;i<n;i++)
	{
		cout<<endl<<i+1<<" choose your voter  name (mr or sir)"<<" : ";
		cin>>a[i];
	}
	int count1=0,count2=0;
	for(int i=0;i<n;i++)
	{
		
		if(a[i]=="mr")
		{
			count1+=1;
		}
		if(a[i]=="sir")
		{
			count2+=1;
		}
		
	}
	
	cout<<endl<<"total votes of mr : "<<count1;
	cout<<endl<<"total votes of sir : "<<count2;
	int m;
	m=n-(count1+count2);
	cout<<endl<<"number of spoil votes : "<<m;;
	
}
