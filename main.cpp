#include <iostream>
#include <string>
#include "student.h"

using namespace std;


//void show(Student student) {
//
//	cout << "Name:" << student.name << endl;
//	cout << "age:" << student.age << endl;
//	cout << "mark:" << student.mark << endl;
//	cout << "alive:" << (student.alive ? "yes" : "no") << endl;
//}

void change(Student student) {
	student.name = "Egor";
	student.age = 16;
	student.mark = 10;
	student.alive = false;
}

int main() {
	Student* st1 = new Student;
	

	st1 -> name = "Vlad";
	st1->age = 15;
	st1->mark = 9.9;
	st1->alive = true;

	Student* st2 = st1;

	cout << "Before:" << endl;
	cout << st1->getstring() << endl;

	st2->name = "Matvey";

	cout << "After:" << endl;
	cout << st1->getstring() << endl;
	return 0;
}
