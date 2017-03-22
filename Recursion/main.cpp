#include <iostream>


using namespace std;

int months[] = {31,28,31,30,31,30,31,31,30,31,30,31,30,31};


//Create a recursive function that can get the
//Strength of a day in the year
//i.e jan 1st strength = 1
    //dec 31st = 365


int strengthOfDay(int* monthsArray,int day, bool isJan){
    //If the address of monthsArray is equal to the address of months at position 0
    //We have found th base case
    if(monthsArray == &months[0]){
        cout << "Hit base case: " << monthsArray << " is equal to " << &months[0] << endl;
        return 31;
    }
    if(day == 0){
        cout << "Hit inner \n";
        return *monthsArray + strengthOfDay((monthsArray-=1),0,false);
    }
    else{
        cout << "Hit day \n";
      return day + strengthOfDay((monthsArray-=1),0,false);
    }
    
}

int main(){
    for(int i =0 ; i < 12; i++){
        cout << "i = " << i << "Address is " << &months[i] << endl;
    }
    cout << strengthOfDay(&months[1],28,false);
    
    
}