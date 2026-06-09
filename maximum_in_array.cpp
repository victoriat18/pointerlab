//2. Maximum in Array
#include <iostream> 
using namespace std;

int main (){
 int numbers[] = {};

int* max_ptr = numbers;
int* ptr = numbers;

while (ptr < numbers + 6){
    if (*ptr > *max_ptr){
        max_ptr = ptr;
    }
    ptr++; // similar to i++
}
cout << "Maximum value: "<< *max_ptr << endl;

        return 0;
}