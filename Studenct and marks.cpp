#include<iostream>
using namespace std;
class student
{
	char name[24];
	int rollno;
	public:
void get_detials()
	{
		cout<<endl<<"Enter the student name : ";
		cin>>name;
		cout<<"Enter the rollno : ";
		cin>>rollno;
	}
void stu_disp()
	{
		cout<<endl<<"Name of the student "<<name;
		cout<<endl<<"Rollno is  "<<rollno;
	}
};
class marks: public student
{

public:
   int n;
   int mark[25];

 void get_mark()
   	{
   		cout<<endl<<"Enter the number of subject : ";
   		cin>>n;
   		cout<<endl<<"--Enter mark--";
   		for(int i=0;i<n;i++)
   		{
   			cout<<endl<<"enter mark for subject "<<i+1<<" : ";
   			cin>>mark[i];
   			
   			
		 }
	}
	
	
	void mark_disp()
	{
		cout<<endl<<"marks are "<<endl;
		for(int j=0;j<n;j++)
   		{
   		cout<<endl<<"mark of subject "<<j+1<<" = "<<mark[j];
   		}
		
	}
   	
};
class result:public marks
{
	int tot=0,avg;
	int k=0;
	public:
		void calc()
		{
		for(int i=0;i<n;i++)
   		{
   			tot+=mark[i];
   			
		 }
		 avg=tot/n;
		 
    	}
    	
    	void get_res()
    	{
    	for(int i=0;i<n;i++)
   		{
   		  if(mark[i]>33)
   		    {
			  k+=1; 
		     }
   			
		 }
		}
	void res_disp()
	{
		cout<<endl<<" total is "<<tot<<" and the average is "<<avg;
		if(k==n)
		{
			cout<<endl<<"the student is passed";
			
		}
		else
		{
		cout<<endl<<"the student is failed";
		}
	}
};
int main()
{
	result r1;
	r1.	get_detials();
	r1.	stu_disp();
	r1.get_mark();
	r1.mark_disp();
	r1.calc();
	r1.get_res();
	r1.res_disp();
	return 0;
}

