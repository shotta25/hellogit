#include <iostream>
#include <string>
#include <vector>
#include "Students.h"

using namespace std;
void fillvector(vector<Students>&);
void Printvector(const vector<Students>&);
int main() {

	vector<Students> Class;
	fillvector(Class);
	Printvector(Class);

	std::cout << "\n Press 0 To exit";
	int pause;
	pause = 0;
	std::cin >> pause;
	return 0;
}

void fillvector(vector<Students>& newClass) {
	string name;
	int age;
	for (int m = 0; m < 4; m++) {
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Age: ";
		cin >> age;

		Students Class(name, age);
		newClass.push_back(Class);
		cout << endl;
	}
}
void Printvector(const vector<Students>& newClass) {
	unsigned int size = newClass.size();

	for (unsigned int i = 0; i < size; i++) {
		cout << "Name: " << newClass[i].getName() << endl;
		cout << "Age: " << newClass[i].getAge() << endl;
	}
}

