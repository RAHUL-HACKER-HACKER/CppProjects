#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;
//stack->LIFO and  queue->FIFO;
//stack operations push,pop,top,size
//dueue operations push,pop,front
int main(){
	stack<int>s;
	s.push(2);
	s.push(4);
	s.push(6);
	s.push(8);
	s.push(10);
	cout<<"size of stack :"<<s.size()<<endl;
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
		
		
	}
	
	queue<char> alph;
	    alph.push('a');
		alph.push('b');
		alph.push('c');
		alph.push('d');	
		alph.push('e');
		
	cout<<"size of queue :"<<alph.size()<<endl;
	while(!alph.empty()){
		cout<<alph.front()<<endl;
		alph.pop();
				
}
	
	
	
	
	
	return 0;
}
