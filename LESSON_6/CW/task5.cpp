#include "stdafx.h"
#include <stdlib.h>


class list {
protected:
	int values[100];
public:
	void push(int);
	int pop();
	void insert(int, int);
	int remove(int);
};

class map {
protected:
	int key;
	int value;
	list keys;
	list values;
public:
	void add(int, int);
	int pop(int);
	list keys();
	list values();
};

void list::push(int)
{

}

void list::insert(int, int)
{

}

int list::pop(int)
{

}

int list::remove(int)
{

}

void map::add(int, int)
{

}

int map::pop(int)
{

}

list keys ()
{

}

list values ()
{

}






int main()
{


	return 0;
}

