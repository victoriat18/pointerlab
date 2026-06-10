//2. Maximum in Array
#include <iostream> 
using namespace std;

int main (){
 int numbers[] = {16,45,8,18,21,67}; //random assorted numbers

int* max_ptr = numbers; // first element
int* ptr = numbers; // to the last element

//searches for the maximum value using pointer
while (ptr < numbers + 6){ // 6 numbers in the array. 
    if (*ptr > *max_ptr){
        max_ptr = ptr; 
    }
    ptr++; // similar to i++
}
cout << "Maximum value: "<< *max_ptr << endl; //display

        return 0;
}