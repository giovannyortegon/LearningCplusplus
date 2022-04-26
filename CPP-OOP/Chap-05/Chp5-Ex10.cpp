#include<iostream>
#include<cstring>

using namespace std;

class Student
{
	private:
		char * firstName;
		char * lastName;
		char middleInitial;
		float gpa;
		char * currentCourse;
		const int studentId;

	public:
		// member function prototype
		Student();
		Student(const char *, const char *, char, float, const char *, int);
		Student(const Student &);
		~Student();
		void Print() const;
		const char * GetFirstName() const { return firstName; }
		const char * GetLastName() const { return lastName; }
		char GetMiddleInitial() const { return middleInitial; }
		float GetGpa() const { return gpa; }
		const char * GetCurrentCourse() const { return currentCourse; }
		int GetStudentId() const { return studentId; }
		void SetCurrentCourse(const char *);
};

Student::Student(): studentId(0), gpa(0.0)
{
	firstName = lastName = 0;
	middleInitial = '\0';
	currentCourse = 0;
}

Student::Student(const char * fn, const char * ln, char mi,
				float avg, const char * course, int id):
				studentId(id), gpa(avg), middleInitial(mi)
{
	firstName = new char [strlen(fn) + 1];
	strncpy(firstName, fn, sizeof(fn) + 1);
	lastName = new char [strlen(ln) + 1];
	strncpy(lastName, fn, sizeof(ln) + 1);
	currentCourse = new char [strlen(course) + 1];
	strncpy(currentCourse, course, sizeof(course));
}

Student::Student(const Student &s): studentId(s.studentId)
{
	firstName = new char [strlen(s.firstName) + 1];
	strncpy(firstName, s.firstName, sizeof(s.firstName));
	lastName = new char [strlen(s.lastName) + 1];
	strncpy(lastName, s.lastName, sizeof(s.lastName));
	middleInitial = s.middleInitial;
	gpa = s.gpa;
	currentCourse = new char [strlen(s.currentCourse) + 1];
	strncpy(currentCourse, s.currentCourse, sizeof(s.currentCourse));
}
Student::~Student()
{
	delete firstName;
	delete lastName;
	delete currentCourse;
}

void Student::Print() const
{
	cout << firstName << " " << middleInitial << ". ";
	cout << lastName << " with id: " << studentId;
	cout << " and gpa: " << gpa << " is enrolled in: ";
	cout << currentCourse << endl;
}
void Student::SetCurrentCourse(const char * curr)
{
	currentCourse = new char [strlen(curr) + 1];
	strncpy(currentCourse, curr, sizeof(curr));
}

int main()
{
	Student s1("Zack", "Moon", 'R', 3.75, "C++", 1378);
	cout << s1.GetFirstName() << " " << s1.GetLastName();
	cout << " Enrolled in " << s1.GetCurrentCourse() << endl;
	s1.SetCurrentCourse("Advanced C++ Programming");
	cout << s1.GetFirstName() << " " << s1.GetLastName();
	cout << " New course: " << s1.GetCurrentCourse() << endl;
}
