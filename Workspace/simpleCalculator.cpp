#include <iostream>

using namespace std;

class Calculator {
    private:
        int firstNum;
        int secondNum;
    public:
        int multiply(int a, int b);
        int add(int a, int b);
        int subtract(int a, int b);
        int divide(int a, int b);
};
int Calculator::multiply(int a, int b){
    return a*b;
}
int Calculator::add(int a, int b){
    return a+b;
}
int Calculator::subtract(int a, int b){
    return a-b;
}
int Calculator::divide(int a, int b){
    return a/b;
}
int main (){
    Calculator c;
    
    cout << c.multiply(4,3) << endl;
    cout << c.add(17,20) << endl;
    cout << c.divide(3,4) << endl;
    cout << c.subtract(45,30) << endl;
    
}

