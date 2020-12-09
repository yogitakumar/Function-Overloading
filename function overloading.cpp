//C++ program for function overloading

#include <iostream>
using namespace std;

// function with int and doble parameters
void show(int n1, double n2) {
    cout << "Integer number: " << n1;
    cout << " and double number: " << n2 << endl;
}

// function with 1 int parameter
void show(int n) {
    cout << "Integer number: " << n << endl;
}

// function with 1 double parameter
void show(double n) {
    cout << "Double number: " << n << endl;
}

int main() {

    int i = 5;
    double d = 5.5;

    show(i, d);

    show(i);

    show(d);
 
    return 0;
}