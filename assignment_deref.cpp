//Pointer Lab, 6/8/2026
#include <iostream> 

using namespace std;
int main (){
    int a, b;
//Ask user
        cout << "Enter an integer for a:";
        cin >> a;

        cout << "Enter an integer for b:";
        cin >> b;
//Pointers
        int* ptr_a = &a;
        int* ptr_b = &b;

        cout << "\nDeferenced value of ptr_a: " << *ptr_a << endl;
        cout << "\nDeferenced value of ptr_b: " << *ptr_b << endl;

        return 0;
}