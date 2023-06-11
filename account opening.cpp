using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>
class bank
{
	public:
		string name,add;
		int acc,amount;
		void saving_acco_open()
		{
			cout<<"inter your name : ";
			cin>>name;
			cout<<endl<<"inter your address : ";
			cin>>add;
			cout<<endl<<"inter opening amount : ";
			cin>>amount;
			
			
		}
		void current_acco_open()
		{
			cout<<"inter your name : ";
			cin>>name;
			cout<<endl<<"inter your address : ";
			cin>>add;
			cout<<endl<<"inter opening amount : ";
			cin>>amount;
			
		}
		void saving_detail()
		{
			cout<<endl<<"---your passbook detail---";
			cout<<endl<<"your name : "<<name;
			cout<<endl<<"your address : "<<add;
			cout<<endl<<"account type : saving";
			cout<<endl<<"your remaining balance : "<<amount;
			cout<<endl<<"interest rate : 10% ";
			cout<<endl<<"your account no : "<<acc;
		}
		void current_detail()
		{
			cout<<endl<<"---your passbook detail---";
			cout<<endl<<"your name : "<<name;
			cout<<endl<<"your address : "<<add;
			cout<<endl<<"account type : current";
			cout<<endl<<"your remaining balance : "<<amount;
			cout<<endl<<"interest rate : 00% ";
			cout<<endl<<"your account no : "<<acc;
		}
		void deposit()
		{
			int deposit;
			cout<<endl<<"inter deposit amount : ";
			cin>>deposit;
			amount+=deposit;
		}
		void withdraw()
		{
			int withdraw;
			cout<<endl<<"inter deposit amount : ";
			cin>>withdraw;
			amount-=withdraw;
		}
};
main()
{
	bank b;
	string type;
	int acco,n;
	srand(time(0));
	acco=rand();
	b.acc=acco;
	
	cout<<"inter account type (saving or current) : ";
	cin>>type;
	if(type=="saving")
	{
		b.saving_acco_open();
		b.saving_detail();
		cout<<endl<<"_______$$$$$$$_______";
		cout<<endl<<"withdraw press 1 or deposit press 2 ";
	    cin>>n;
	    switch(n)
	    {
		    case 1:
			{
				b.withdraw();
			    b.saving_detail();
			    break;
			}
			
		    case 2:
			{
			    b.deposit();
			    b.saving_detail();
				break;
		    }
				
		}
	}
	else
	{
		b.current_acco_open();
		b.current_detail();
		cout<<endl<<"_______$$$$$$$_______";
		cout<<endl<<"withdraw press 1 or deposit press 2 ";
	    cin>>n;
	    switch(n)
	    {
		    case 1:
			{
				b.withdraw();
			    b.current_detail();
			    break;
			}
			
		    case 2:
			{
			    b.deposit();
			    b.current_detail();
				break;
		    }
				
		}
    }
	
}
