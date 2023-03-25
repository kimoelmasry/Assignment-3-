#include <iostream>
using namespace std;
template <class T>
class Queue
{
private:
	int front;
	int rear;
	int poss;
	T appointments[10];
public:
	Queue()
	{
		front = 0;
		rear = -1;	
		pos = 0;
	}
	void(is)
	void Push(T val)
	{

			rear++;
		appointments[rear] = val;
		count++;


	}
	void Pop()
	{
		T popped = arr[front];
		front--;
		count--; 
		cout << popped << "is removed";

	}
	
};
