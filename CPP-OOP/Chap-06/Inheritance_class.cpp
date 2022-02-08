#include<iostream>

class Person {
	private:
		char * name;
		char * title;

	public:
		// constructors, destructor,
		const char * GetTitle() const { return title; }
};

class Student : public Person {
	private:
		float gpa;

	public:
		float GetGpa() const { return gpa; }
}
