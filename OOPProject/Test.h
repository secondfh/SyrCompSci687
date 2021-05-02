//Luke Davitt
// CIS 687 Adv OOP
// Syracuse University
// 05/02/2021


#pragma once


#include <vector>
#include <string>
#include "Exception.h"

using std::vector;
using std::string;

class Test
{
	protected:
		Exception excpetion;
		bool pass;

	public:
		void run();
		bool passed();
		string getException();
};

