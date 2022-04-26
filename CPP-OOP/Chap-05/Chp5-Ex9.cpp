#include<iostream>
#include<cstring>

using namespace std;

class Student
{
	private:
		// data member
		char * firstName;
		char * lastName;
		char middleInitial;
		float gpa;
		char * currentCourse;
		const int studentId;		// constant data member

	public:
		// member function prototypes
		Student();
		Student(const char *, const char *, char, float, const char *, int);
		Student(const Student &);
		~Student();

		void Print();
		const char * GetFirstName() { return firstName; }
		const char * GetLastName() { return lastName; }
		float GetGpa() { return gpa; }
		const char * GetCurrentCourse() { return currentCourse; }
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

void Student::Print()
{
	cout << firstName << " " << middleInitial << ". ";
	cout << lastName << " has a gpa of: " << gpa;
	cout << " and id enrrolled in: " << currentCourse << endl;
}

int main()
{
	Student s1("Rense", "Alexander", 'Z', 3.7, "C++", 1290);
	cout << s1.GetFirstName() << " " << s1.GetLastName();
	cout << "has gpa of: " << s1.GetGpa() << " ";
	cout << s1.GetCurrentCourse() <<"\n";

	s1.Print();

	return (0);
}
