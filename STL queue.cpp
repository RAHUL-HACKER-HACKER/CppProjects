using namespace std;
#include <iostream>
#include<queue>
//queue work on FIFO data structure (first in first out)
int main()
{
	queue<string> q;
	
	q.push("ra");
	q.push("hu");
	q.push("l k");
	q.push("um");
	q.push("ar");
	cout<<endl<<"queue all elements : ";
	while(!q.empty())
	{
		cout<<q.front();
		q.pop();
		
	}
	return 0;
}

