#include"queue.h"
#include<iostream>
int main()
{
	IceCola::Queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	while (!q.empty())
	{
		std::cout << q.front() << std::endl;
		q.pop();
	}
	return 0;
}
