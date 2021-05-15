#pragma once
#include "Test.h"

void Test::run()
{
}

bool Test::passed()
{
	if (pass == true) {										//Return for true
		//std::cout << "The test case returned true.";
		return true;
	}
	else {													//Return for false
		//std::cout << "The test case returned false.";
		return false;
	}
};

void Test::setResult(bool result) {
	pass = result;
}

string Test::getException() {
	//return exception.getMessage();
	return "test";
};
