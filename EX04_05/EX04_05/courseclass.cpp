#include <iostream>
#include <string>
using namespace std;
class Course{
private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity=100;
public:
	Course(const string&CourseName, int Capacity);
	~Course();
	string getcourseName() const;
	void addStudent(const string& name);
	void dropStudent(const string& name);
	string* getStudents()const;
	int getNumbeOfStudents()const;
	void clear();
};
Course::Course(const string&CourseName, int Capacity){
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}
Course::~Course(){
	delete[] students;
}
string Course::getcourseName() const{ return courseName; }
void Course::addStudent(const string& name){ 
	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const string& name){
	students[numberOfStudents] = name;
	numberOfStudents--;
}
string*Course::getStudents()const{ return students; }
int Course::getNumbeOfStudents()const{ return numberOfStudents; }
void Course::clear(){
	numberOfStudents = 0;
	delete[]students;
}

int main(){
	Course course1("data structures", 10);
	Course course2("database systems", 15);

	course1.addStudent("peter jones");
	course1.addStudent("brain smith");
	course1.addStudent("anne Kennedy");

	course2.addStudent("peter jones");
	course2.addStudent("steve smith");

	cout << "number of students in course1: " << course1.getNumbeOfStudents() << endl;
	string* students = course1.getStudents();
	for (int i = 0; i < course1.getNumbeOfStudents(); i++){
		cout << students[i] << " , ";
	}
	cout << "\nNumber of students in course2: " << course2.getNumbeOfStudents() << endl;
	students = course2.getStudents();
	for (int i = 0; i < course2.getNumbeOfStudents(); i++){
		cout << students[i] << " , ";
	}
	course2.dropStudent("peter jones");
	cout << "\nNumber of students in course2: " << course2.getNumbeOfStudents() << endl;
	students = course2.getStudents();
	for (int i = 0; i < course2.getNumbeOfStudents(); i++){
		cout << students[i] << endl;
	}

	return 0;
}