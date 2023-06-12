#include<iostream>
using namespace std;
#include<stack>
//stack class and performing push and pop of stack
main()
{
	int n,m;
	stack<int> s;
	//pushing elements into stack
	cout<<"inter number of stack element :";
	cin>>n;
	cout<<endl<<"inter stack elements..... ";
	for(int i=0;i<n;i++)
	{
		cin>>m;
		s.push(m);
	}
	//now poping element in stack
	cout<<endl<<"inter number of pop element from back :";
	cin>>n;
	for(int j=0;j<n;j++)
	{
		s.pop();
	}
	cout<<endl<<"size of stack :"<<s.size();
	cout<<endl<<"top element :"<<s.top();
}
