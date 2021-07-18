#include <iostream>
using namespace std;

int main(){
    char a;
    double num1, num2;

    cout << "Enter the operation(a + b): ";
    cin >> num1 >> a >> num2;

    switch(a){
        case '+': cout << num1;
            break;
        case '-': cout << num1 - num2;
            break;
        case '/' :if(num2 == 0)
                    cout << "Divide by zero";
                 else
                    cout << num1 / num2;
            break;
        case '*': cout << num1 * num2;
            break;
        default : cout << "Invalid Operation";
    }
    return 0;
}