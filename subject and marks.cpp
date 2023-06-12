using namespace std;
#include <iostream>
class student
{
	public:
		int roll;
		string name;
		void get_detail()
		{
			cout<<"enter name of student : ";
			cin>>name;
			cout<<endl<<"inter roll number : ";
			cin>>roll;
			
		}
		void disp()
		{
			cout<<endl<<"------student detail-------";
			cout<<endl<<"student name : "<<name;
			cout<<endl<<"student roll number : "<<roll;
			
		}
};
class theory
{
	public:
		int tmarks[100],n;
		void get_tmarks()
		{
			cout<<endl<<"inter number of subject in theory : ";
			cin>>n;
			for(int i=0;i<n;i++)
			{
				cout<<endl<<"inter theory subject "<<i+1<<"mark : ";
				cin>>tmarks[i];
			}
			
		}
		void t_disp()
		{
			cout<<endl<<"----your theory marks---";
			for(int i=0;i<n;i++)
			{
				
				cout<<endl<<"subject "<<i+1<<" mark : "<<tmarks[i];
			}
		}
};
class practical
{
	public:
		int pmarks[100],m;
		void get_pmarks()
		
		{
			cout<<endl<<"inter number of subject in practical : ";
			cin>>m;
			for(int i=0;i<m;i++)
			{
				cout<<endl<<"inter practical subject "<<i+1<<"mark : ";
				cin>>pmarks[i];
			}
			
		}
		void p_disp()
		{
			cout<<endl<<"----your practical marks---";
			for(int i=0;i<m;i++)
			{
				
				cout<<endl<<"subject "<<i+1<<" mark : "<<pmarks[i];
			}
		}
		
};
class result:public student,public theory,public practical
{
	public:
		int tot,t_tot=1,p_tot=1;
		void cal_tot()
		{
			for(int i=0;i<n;i++)
			{
				t_tot+=tmarks[i];
			}
			for(int i=0;i<m;i++)
			{
				p_tot+=pmarks[i];
			}
			tot=t_tot+p_tot;
			cout<<endl<<endl<<"total theory munber : "<<t_tot;
			cout<<endl<<"total practical munber : "<<p_tot;
			cout<<endl<<"total munber : "<<tot;
			
			
			
		}
		void cal_res()
		{
			int a=0,b=0;
			for(int i=0;i<n;i++)
			{
				if(tmarks[i]>33)
				{
					a+=1;
				}
		    }
			for(int i=0;i<m;i++)
			{
				if(pmarks[i]>33)
				{
					b+=1;
				}
			}
			if(a==n)
			{
				cout<<endl<<"your are pass in theory subject";
				
			}
			else
			{
				cout<<endl<<"your are fail in theory subject";
			}
			if(b==m)
			{
				cout<<endl<<"your are pass in practical subject";
				
			}
			else
			{
				cout<<endl<<"your are fail in practical subject";
			}
			
   		
		}
		
		
};
main()
{
	result r;
	r.get_detail();
	r.get_tmarks();
	r. get_pmarks();
	r.disp();
	r.t_disp();
	r. p_disp();
	r.cal_tot();
	r.cal_res();
}
