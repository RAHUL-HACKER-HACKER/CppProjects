using namespace std;
#include <iostream>
class file
{
	public:
		
		int n;
		string a[1000];
		void write()
		{
			
			cout<<"write your file size : ";
			cin>>n;
			cout<<endl<<"now write your story ";
			
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
				
			}
		}
};
class add:public file
{
	public:
		void rewrite()
		{
			cout<<endl<<"you can add something : ";
			cin>>a[n];
			cout<<"\n";
		}
		
		void disp()
		{
			for(int j=0;j<=n;j++)
			{
				cout<<a[j]<<" ";
			}
		}
};
int main()
{
	add a;
	a.write();
	a.rewrite();
	a.disp();
}
