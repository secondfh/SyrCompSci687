#pragma once
#include "Exception.h"


Exception::Exception()
{
}

void Exception::setMessage(string excpetion) {
	this->_message = excpetion;
};

string Exception::getMessage() {
	return _message;
};

