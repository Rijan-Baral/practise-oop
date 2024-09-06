#include <iostream>
#include <string>
using namespace std;

// function overloading:function overloading is nothing but function with same name but
// different parameter, different number of parameter or different sequence of parameter.

int add()
{ // add function with no parameter.
    cout << 10 + 10 << endl;
}

int add(int a)
{ // add function with single parameter.
    cout << ++a << endl;
}

// different parameters.
int add(int a, int b)
{ // add function with 2 parameters of type int.
    cout << a + b << endl;
}

int add(int a, int b, int c)
{
    cout << a + b + c << endl;
}

double add(double a, double b)
{ // add function with 2 parameters of type double.
    cout << a + b << endl;
}

double add(double a, double b, double c)
{ // add function with 3 parameters ie : diffenrent no of parameters.
    cout << a + b + c << endl;
}

double add(int a, double b)
{ // add function with different sequence of parameter.
    cout << a + b << endl;
}

double add(double a, int b)
{ // add function with different sequence of parameter.
    cout << a + b << endl;
}

int main()
{
    // calling the functions.all the function have same name but the the function will call the repective functions with respective parameters.
    add();                 // calls the function with no parameter.
    add(10);               // calls the function with one parameter.
    add(10, 20);           // calls the function with 2 parameters of type int.
    add(10, 20, 30);       // calls the function with 3 parameters of type int.
    add(10.5, 20.5);       // calls the function with 2 parameters of type double.
    add(10.5, 20.5, 30.5); // calls the function with 3 parameters of type double.
    add(10, 20.5);         // calls the function with 2 parameters of type int and double respectively.
    add(10.5, 20);         // calls the function with 2 parameters of type double and int respectively.
}
