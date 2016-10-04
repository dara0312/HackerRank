#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int professor_id = 1;
int student_id = 1;
class Person {
public:
	string name;
	int age, score;
	virtual void putdata() = 0;
	virtual void getdata() = 0;
};
class Professor : public Person {
	void putdata() { cout << name << ' ' << age << ' ' << score << ' ' << professor_id++ << endl; }
	void getdata() { cin >> name >> age >> score; }
};
class Student : public Person {
	void putdata() { cout << name << ' ' << age << ' ' << score << ' ' << student_id++ << endl; }
	void getdata() { cin >> name >> age; score = 0; for (int i = 0, n = 0; i<6; i++)cin >> n, score += n; }
};

int main() {

	int n, val;
	cin >> n; //The number of objects that is going to be created.
	Person *per[n];

	for (int i = 0; i < n; i++) {

		cin >> val;
		if (val == 1) {
			// If val is 1 current object is of type Professor
			per[i] = new Professor;

		}
		else per[i] = new Student; // Else the current object is of type Student

		per[i]->getdata(); // Get the data from the user.

	}

	for (int i = 0; i<n; i++)
		per[i]->putdata(); // Print the required output for each object.

	return 0;

}
