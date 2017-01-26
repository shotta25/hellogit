#pragma once

// HEADER FILE

#include <iostream>
#include <string>

using namespace std;

class Students {
private:
	string name;
	int age;

public:
	//default 
	Students();

	//overload
	Students(string, int);

	//Functions
	string getName() const;
	int getAge() const;

	void setName(string);
	void setAge(int);
};
