//Luke Davitt
// CIS 687 Adv OOP
// Syracuse University
// 05/02/2021


#pragma once


#include <vector>
#include <string>
#include "Exception.h"
#include <iostream>

using std::vector;
using std::string;

class Test
{
private:
	Exception exception;
	

public:
	explicit Test()
		:pass{true}
	{}
	bool pass;
	void setResult(bool result);
	void run();
	bool passed();
	string getException();
};

