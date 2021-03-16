#include "priority_queue.h"
#include <iostream>

using namespace std;

int main()
{
	priority_queue<int> q;
	q.push(10);
	q.push(9);
	q.push(8);
	q.push(7);
	q.push(6);
	q.push(5);
	q.push(4);
	q.push(4);
	q.push(3);
	q.push(2);
	q.push(98);
	q.push(11);
	q.push(15);
	q.push(23);
	q.push(77);
	while(!q.empty())
	{
		cout<< q.top()<<endl;
		q.pop();
	}
	//q.print_queue(q);
	
	//q.pop();
	//q.print_queue(q);
	//cout<<"Top element is "q.top()<<endl;
}