using namespace std;
#include <iostream>
#include<stack>
//stack work on LIFO data structure (last in first out)
main()
{
	stack<int> s;
	int n,x;
	cout<<"inter stack element number : ";
	cin>>n;
	cout<<endl<<"inter stack values :";
	for(int i;i<n;i++)
	{
		cin>>x;
		s.push(x);
	}
	
	cout<<endl<<endl<<"size of stack :"<<s.size();
	cout<<endl<<endl<<"top element :"<<s.top();
	
	cout<<endl<<"stack all elements : ";
	while(!s.empty())
	{
		cout<<s.top()<<",";
		s.pop();
		
	}
	
}


