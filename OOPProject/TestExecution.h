//Luke Davitt
// CIS 687 Adv OOP
// Syracuse University
// 05/02/2021


#include <vector>
#include <string>
#include "Test.h"

using std::vector;
using std::string;


#pragma once

class TestExecution
{
	private:
		vector<Test*> _tests;

	public:
		void addTest(Test);
		void run();
		string getResults();
};

