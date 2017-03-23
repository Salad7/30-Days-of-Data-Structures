#include <iostream>

using namespace std;


class Operation {
    protected:
        int firstNum;
        int secondNum;
    public:
        Operation(int,int);
        virtual int applyOperation();
};
int Operation::applyOperation(){
    return 0;
}
Operation::Operation(int a, int b){
    firstNum = a;
    secondNum = b;
}

class Multiply : public Operation {
     private:
        int a;
        int b;
     public:
        Multiply(int c,int d);
        int applyOperation();
};
Multiply::Multiply(int c, int d) : Operation(c,d){
    a = c;
    b = d;
    
}
int Multiply::applyOperation(){
    return a * b;
    
}

int main (){
   Multiply m(8,1);
   Operation* op;
   op = &m;
   
   //cout << m.applyOperation(8,1) << endl;
   //cout << op.applyOperation(4,3) << endl;
  cout << op->applyOperation();
}

