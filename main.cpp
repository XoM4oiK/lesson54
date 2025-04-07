#include <iostream>
#include <string>
#include "teacher.h"

using namespace std;


int main() {
	Student* list = nullptr;
	int size;

	cout << "Input numbers of studrents:";
	cin >> size;

	list = new Student[size];

	cout << "Input data of students";
	for (int i = 0; i < size; i++)
	{
		cout << "Student number " << i + 1 << ":\n";
		cout << "name:";
		cin >> list[i].name;

		cout << "age:";
		cin >> list[i].age;

		cout << "avarage mark:";
		cin >> list[i].mark;

		cout << "is alive (y/n):";
		char answer;
		cin >> answer;

		list[i].alive = islower (answer) == 'y';

	}

	Teacher teacher;

	Student result = teacher.getALLBestStudents(list, size);

	string msg = result.alive ? "Best students is" + result.name : "No best students";

	cout << msg;

	return 0;
}
