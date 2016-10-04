#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student {
	int age;
	string first_name;
	string last_name;
	int standard;
public:
	void set_age(int a) { age = a; }
	void set_first_name(string fn) { first_name = fn; }
	void set_last_name(string ln) { last_name = ln; }
	void set_standard(int s) { standard = s; }
	int get_age() { return age; }
	string get_first_name() { return first_name; }
	string get_last_name() { return last_name; }
	int get_standard() { return standard; }
	string to_string() { return ::to_string(age) + "," + first_name + "," + last_name + "," + ::to_string(standard); }
};

int main() {
	int age, standard;
	string first_name, last_name;

	cin >> age >> first_name >> last_name >> standard;

	Student st;
	st.set_age(age);
	st.set_standard(standard);
	st.set_first_name(first_name);
	st.set_last_name(last_name);

	cout << st.get_age() << endl;
	cout << st.get_last_name() << ", " << st.get_first_name() << endl;
	cout << st.get_standard() << endl;
	cout << endl;
	cout << st.to_string();

	return 0;
}