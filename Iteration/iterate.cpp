#include <iostream>

using namespace std;

class IteratableInterface{
    public:
    //Positions to the previous item
    //virtual void previous();
    //Determines whether the iterator refers to an item returns true if the end has been reached
    //virtual bool isDone();
    virtual void first();
    //virtual void last();
    
    
    
};
class  Iterator{
  private:
  int* container;  
  int arraySize;
  
  
  
  
  public:
  Iterator(int* _ptrToArray){
    //Copy array into container
    container = _ptrToArray;
    int* temp = _ptrToArray;
    while(*temp != 0){
      cout << "Value : " << *temp << endl;
      temp = temp+1;
      arraySize++;
    }
   // lastItemIndex = 
    cout << " Size of array " << arraySize;
  }
  void first();
  void doubleArray();
  int getSize();
}; 
  void Iterator::first(){
    cout << "the first item is " << *container;
  }
  void Iterator::doubleArray(){
    int* temp = container;
    container = new int [arraySize*2];
    arraySize = arraySize*2;
  }
  
  int Iterator::getSize(){
    
    return arraySize;
  }
  
  
  
    
    

int main(){
    int foo[] = {1,2,3,4,5,9,3};
     Iterator iterate(foo);
    iterate.doubleArray();
   cout << endl << iterate.getSize() << endl;
    cout << endl << iterate.first() << endl;
    
}


