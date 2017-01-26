#include <iostream>
#include "Students.h"

Students::Students() {
	name = "";
	age = 0;
}

Students::Students(string n, int a) {
	name = n;
	age = a;
}
string Students::getName() const {
	return name;
}
int Students::getAge() const {
	return age;
}
void Students::setName(string n) {
	name = n;
}
void Students::setAge(int a) {
	age = a;
}
