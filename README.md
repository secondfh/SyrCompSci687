# Test Suite Project

This repo is an example of a possible architecture for a test suite.  The classes/architecture will be as generic as possible, as to facilitate
integration into a variety of different projects

### TestExection Class
this class contains a vector of Test objects, that when the run method is called, will cycle through the tests to see if they pass or fail

### Test Class
this is a class which has a basic implimentation of what a test looks like, in the future the objective would be for a specific
class to inherit this one, and through polymorphism be executable by the TestExecution Class

### Exception Class
This is a very basic implimentation of what a generated exception type looks like.
