//Luke Davitt
// CIS 687 Adv OOP
// Syracuse University
// 05/02/2021


#pragma once

#include <vector>
#include <string>

using std::vector;
using std::string;

class Exception
{
protected:
	string _message;

public:
	Exception();
	void setMessage(string);
	string getMessage();
};

