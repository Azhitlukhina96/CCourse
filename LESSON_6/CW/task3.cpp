#include "stdafx.h"

class queue {
protected:
	int _q[100];
	int _sloc;
public:
	queue(); // конструктор
	~queue(); // деструктор
	void push(int i);
	int pop();
};

// конструктор
queue::queue()
{
	_sloc = 0;
	printf("Queue initialized.\n");
}

// деструктор
queue ::~queue()
{
	printf("Queue destroyed.\n");
}

// Добавление элемента в конец очереди
void queue::push(int i)
{
	if (_sloc == 99) {
		printf("Queue is full.\n");
		return;
	}
	_q[_sloc] = i;
	_sloc++;
}

// Удаление элемента из начала очереди
int queue::pop() {
	if (_sloc == 0) {
		printf("Queue underflow.\n");
		return 0;
	}
	int value = _q[0];

	for (int i = 0; i < _sloc; i++) {
		_q[i] = _q[i + 1];
	}
	_sloc--;
	return value;
}

class stack : public queue
{
public:
	int pop();
};

int stack::pop() {
	if (_sloc == 0) {
		printf("stack underflow.\n");
		return 0;
	}
	return _q[--_sloc];
}


int main()
{
	//queue MyQueue;
	stack MyQueue;

	MyQueue.push(1);
	MyQueue.push(2);
	MyQueue.push(3);
	MyQueue.push(4);

	printf("%d\n", MyQueue.pop());
	printf("%d\n", MyQueue.pop());
	printf("%d\n", MyQueue.pop());
	printf("%d\n", MyQueue.pop());
	printf("%d\n", MyQueue.pop());

	return 0;
}

