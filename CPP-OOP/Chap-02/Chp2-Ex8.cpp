#include<iostream>

using namespace std;

/* overload function prototype */
int maximum(int, int);
float maximum(float, float);

int main()
{
    char a = 'A', b = 'B';
    float x = 5.7, y = 9.89;
    int m = 6, n = 10;

    cout << "The max is: " << maximum(a, b) <<endl;
    cout << "The max is: " << maximum(x, y) <<endl;
    cout << "The max is: " << maximum(m, n) <<endl;

    // The following (ambiguos) line genrates a compiler
    // error since there ate two equally good fn. candidates
    // cput <<"The maximum is: " << maximum(a, y) << endl;

    // We can force a choice by using and explicit typescast
    cout << "The max is: " << maximum((float) a, y) <<endl;

    return (0);
}

int maximum(int arg1, int arg2)
{
    return (arg1 > arg2) ? arg1 : arg2;
}

float maximum(float arg1, float arg2)
{
    return (arg1 > arg2) ? arg1 : arg2;
}
