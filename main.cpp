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
	Student st1, temp;

	st1.name = "Bogdan";
	st1.age = 14;
	st1.mark = 9.5;
	st1.alive = true;

	temp = st1;

	
	
	cout << "Before:" << endl; 
	cout<< st1.getstring() << endl;

	//change(st1);
	st1.name = "Egor";

	cout << "After:" << endl;
	cout << st1.getstring() << endl;

	//cout << st2.getstring() << endl;

	//string name = st1.mark > st2.mark ? st1.name : st2.name;
	Student t = st1.mark > temp.mark ? st1: temp;
	cout << "Best student name is" << t.name << endl;


	return 0;
}
