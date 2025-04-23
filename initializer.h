#include "student.h"
class Initializer {
public:
	void init(Student*& list, int count){
		if (list == nullptr && count > 0) {
			list = new Student[count];
		}

		string names[]{ "Anna","Bob","Bogdan","Victor","Daniil","Dima","Kate","Alice","Olivia","Timofey","Rodion","Roman" };

		int minMark = 4;
		int maxMark = 10;
		int minAge = 13;
		int maxAge = 18;

		for (int i = 0; i < count; i++)
		{
			list[i].name = names[rand() % 12];
			list[i].age = rand() % (maxAge - minAge + 1) + minAge;
			for (int j = 0; j < list[i].countMark; j++)
			{
				list[i].marks[j] = rand() % (maxMark - minMark + 1) + minMark;
			}
		}
	}
};