//1. Assignment and Dereferencing
#include <iostream> 

using namespace std;
int main (){
    int a, b;
//Ask user
        cout << "Enter an integer for a:";
        cin >> a;

        cout << "Enter an integer for b:";
        cin >> b;
//Pointers, stores the addresses of a and b
        int* ptr_a = &a; 
        int* ptr_b = &b; 
//prints out the values using referencing
        cout << "\nDeferenced value of ptr_a: " << *ptr_a << endl;
        cout << "\nDeferenced value of ptr_b: " << *ptr_b << endl;

        return 0;
}