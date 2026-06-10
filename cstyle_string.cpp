//3. Length of C-style String
#include <iostream> 
using namespace std;

int main (){
 char str[] = "Hello World";
// point to the begining of the string
 char* ptr = str;
 int length = 0;
// count characters until the null terminator is reached
 while (*ptr != '\0'){ 
    length++;
    ptr++;
 }
 //display string length
 cout <<"Length of the string: " << length << endl; 
        return 0;
}