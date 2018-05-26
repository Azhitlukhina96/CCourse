#include "stdafx.h"
#include <stdlib.h>

class Record {
protected:
	char *_type;
public:
	virtual char* getType() = 0;
	virtual ~Record() {}
};

class SuccessRecord : public Record {
public:
	SuccessRecord() {
		_type = (char*)malloc(10);
		_type = (char*)"success";
	}
	char* getType() { return _type; }
};

class ErrorRecord : public Record {
public:
	ErrorRecord() {
		_type = (char*)malloc(10);
		_type = (char*)"error";
	}
	char* getType() { return _type; }
};

class Creator {
public:
	virtual Record* factoryMethod() = 0;
};

class SuccessRecordCreator : public Creator {
public:
	Record * factoryMethod() { return new SuccessRecord(); }
};

class ErrorRecordCreator : public Creator {
public:
	Record * factoryMethod() { return new ErrorRecord(); }
};

int main()
{
	int flag = 1;
	Record *currentRecord = NULL;
	if (flag == 0) {
		SuccessRecordCreator creator;
		currentRecord = creator.factoryMethod();
	}
	else {
		ErrorRecordCreator creator;
		currentRecord = creator.factoryMethod();
	}

	printf("Type: %s\n", currentRecord->getType());

	delete currentRecord;

	return 0;
}
