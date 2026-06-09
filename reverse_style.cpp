#include <iostream> 
using namespace std;

int main (){
 char str[] = "Hello World";
 char* ptr = str;

 while (*ptr != '\0'){
    ptr++; // moving to the null character
 }
 ptr--; //moves back to the last character

 cout << "Reversed string: ";
 while (ptr >= str){
    cout << *ptr;
    ptr--;
 }
 cout << endl;
 
        return 0;
}