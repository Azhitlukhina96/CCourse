// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

class Vehicle {
public:
	virtual void move() = 0;
};

class Car : public Vehicle {
public:
	void move() {
		printf("Drive\n");
	}
};

class Ship : public Vehicle {
public:
	void move() {
		printf("Swim\n");
	}
};

class Aircraft : public Vehicle {
public:
	void move() {
		printf("Fly\n");
	}
};


class Creator {
public:
	virtual Vehicle* factoryMethod() = 0;
};

class CarCreator : public Creator {
public:
	Vehicle * factoryMethod() { return new Car(); }
};

class ShipCreator : public Creator {
public:
	Vehicle * factoryMethod() { return new Ship(); }
};

class AircraftCreator : public Creator {
public:
	Vehicle * factoryMethod() { return new Aircraft(); }
};


int main()
{
	int flag = 1;

	Vehicle *myVehicle = NULL;

	switch (flag)
	{

	case 1: {
		CarCreator creator;
		myVehicle = creator.factoryMethod();
		break;
		}
	case 2: {
		ShipCreator creator;
		myVehicle = creator.factoryMethod();
		break;
	}
	case 3: {
		AircraftCreator creator;
		myVehicle = creator.factoryMethod();
		break;
	}

	default:
		break;
	}



	
	myVehicle->move();

	delete myVehicle;

	return 0;
}
