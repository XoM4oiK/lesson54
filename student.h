#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	string name;
	int age;
	double mark;
	bool alive;

	string getstring() {

		string s = "Name:" +name;
		s += ", age:" + to_string(age);
		s += ", mark:" + to_string(mark);
		s += ", alive:";
		s += (alive ? "yes" : "no");
		return s;
	}

};