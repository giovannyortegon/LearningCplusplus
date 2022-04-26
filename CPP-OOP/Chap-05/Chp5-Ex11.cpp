#include<iostream>
#include<cstring>

using namespace std;

class Student 
{
    private:
        // data members
        char * firstName;
        char * lastName;
        char middleInitial;
        float gpa;
        char * currentCourse;
        const char * studentId;
        static int numStudents;

    public:
        //member function prototype
        Student();
        Student(const char *, const char *, char, float,
                const char *, const char *);
        Student(const Student &);
        ~Student();
        void Print()const;
        const char * GetFirstName() const { return firstName; };
        const char * GetLastName() const { return lastName; }
        char GetMiddleInitial() const { return middleInitial; }
        float GetGpa() const { return gpa; }
        const char * GetCurrentCourse() const { return currentCourse; }
        const char * GetStudentId() const { return studentId; }
        void SetCurrentCourse(const char *);
        static int GetNumberStudents();
};

// definition for static data memeber
// (which is implemented as an external variable)
int Student::numStudents = 0;

// Definition for static member function
inline int Student::GetNumberStudents()
{
    return numStudents;
}

inline void Student::SetCurrentCourse(const char * c)
{
    delete currentCourse;
    currentCourse = new char [strlen(c) + 1];
    strncpy(currentCourse, c, sizeof(c));
}