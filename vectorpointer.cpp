//5. Midpoint Vector
#include <iostream> 
#include <vector>
using namespace std;

int main (){
    //create a vector of unsorted integers
 vector<int> nums ={5,8,12,4,9};
//pointer to the first element
 int* left = &nums[0];
//pointer to the last element
 int* right = &nums[nums.size() - 1];

//move both pointers toward the center
while (left < right){
    left ++;
    right--;
}
//calculate the midpoint index
int midpointIndex = left - &nums[0];

//display the midpoint index and values
cout << "Midpoint index: " << midpointIndex << endl;
cout << "Midpoint value: "<< *left << endl;

        return 0;
}