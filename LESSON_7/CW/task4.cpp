#include "stdafx.h"

class Singleton
{
private:
	int _value;

	static Singleton * p_instance;
	// Конструкторы и оператор присваивания 
	// недоступны клиентам
	Singleton() :_value(0) {}
	Singleton(const Singleton&);
	Singleton& operator=(Singleton& obj) {
		return obj;
	}
public:
	static Singleton * getInstance() {
		if (!p_instance)
			p_instance = new Singleton();
		return p_instance;
	}
	void setValue(int value) {
		_value = value;
	}
	int getValue() {
		return _value;
	}
};

Singleton* Singleton::p_instance = 0;


int main()
{
	Singleton *mySingleton1 = Singleton::getInstance();

	mySingleton1->setValue(100);

	Singleton *mySingleton2 = Singleton::getInstance();

	printf("%d\n", mySingleton2->getValue());

	return 0;
}
