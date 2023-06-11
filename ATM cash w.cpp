//answer of 1st question
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
class india_bank
{
	int acc,bal;
	string name,acc_ty;
	public:
		india_bank(int acc2,string name2,string acc_ty2,int bal2)
		{
			acc=acc2;
			name=name2;
			acc_ty=acc_ty2;
			bal=bal2;
		}
		
		void deposit();
		void withdraw();
		void display();
		
	
};
void india_bank::deposit()
{
	int dpt;
	cout<<"inter deposit amount :";
	cin>>dpt;
	bal+=dpt;
	
}
void india_bank::withdraw()
{
	int wdr;
	cout<<"enter withdraw amount :";
	cin>>wdr;
	bal-=wdr;
	
}
void india_bank::display()
{
	cout<<"details of customer______"<<endl;
	cout<<"account number :"<<acc<<endl;
	cout<<"name :"<<name<<endl;
	cout<<"account type :"<<acc_ty<<endl;
	cout<<"remaining balance :"<<bal<<endl;
	
	
}
int main()
{
	int acc2,bal2;
	string name2,acc_ty2;
	cout<<endl<<"inter account number :";
	cin>>acc2;
	cout<<endl<<"inter your name :";
	cin>>name2;
	cout<<endl<<"account type :";
	cin>>acc_ty2;
	cout<<endl<<"account balance :";
	cin>>bal2;
	india_bank ib(acc2,name2,acc_ty2,bal2);
	ib.deposit();
	ib.withdraw();
	ib.display();
	return 0;
	
	
	
	
}

