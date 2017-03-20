#include <iostream>


using namespace std;


int main(){
    
    //Declare a pointer to an int
    int* sumCount;
    
    //Initialize size and sum to 0
    int sum = 0;
    int size = 0;
    
    //Prompt user
    cout << "Enter the size of the array ";
    cin >> size;
    sumCount = new int[size];
    
    //Loop through array and incrementally add to the sum
    for(int i = 0; i < size; i++){
        sum+=i;
    }
    
    //Print out the sum
    cout << sum;
    
    //Delete pointer to int
    delete sumCount;
    
}   