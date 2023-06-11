#include<iostream>
using namespace std;
class student
{
	public:
	char name[25];
	int roll;
	get()
	{
		cout<<"Enter name:";
		cin>>name;
		cout<<"Enter Roll NO:";
		cin>>roll;
	}
};
class theory:public virtual student
{
	public:
	int n,tmark[20],tsum;
	theory()
	{
		tsum=0;
	}
	get_tmark()
	{
		cout<<"Enter no. of sub of theory:";
		cin>>n;
		cout<<endl<<"____Enter the marks___ ";
		for(int i=0;i<n;i++)
		{
			cin>>tmark[i];
		}
	}
	tresult()
	{
		for(int i=0;i<n;i++)
		{
			tsum=tsum+tmark[i];
		}
	}
	tdisp()
	{
		cout<<endl<<"Name:"<<name;
		cout<<endl<<"Roll No:"<<roll;
		for(int i=0;i<n;i++)
		{
			cout<<endl<<"marks["<<i<<"] :"<<tmark[i];
		}
		cout<<endl<<"Sum of Theory :"<<tsum;
	}
};
class practical:virtual public student
{
public:
	int n,pmark[20],psum;
	practical()
	{
		psum=0;
	}
	get_pmark()
	{
		cout<<endl<<"Enter no. of sub of practical:";
		cin>>n;
		cout<<endl<<"....Enter the marks....";
		for(int i=0;i<n;i++)
		{
			cin>>pmark[i];
		}
	}
	presult()
	{
		for(int i=0;i<n;i++)
		{
			psum=psum+pmark[i];
		}
	}
	pdisp()
	{
		cout<<endl<<"Name:"<<name;
		cout<<endl<<"Roll No:"<<roll;
		for(int i=0;i<n;i++)
		{
			cout<<endl<<"marks["<<i<<"] :"<<pmark[i];
		}
		cout<<endl<<"Sum of Practical :"<<psum;
	}
};
class result:public theory, public practical
{
};
main()
{
	result r;
	r.get();  //either via theory or practical
	r.get_tmark();
	r.tresult();
	r.tdisp();
	r.get_pmark();
	r.presult();
	r.pdisp();
	
}
