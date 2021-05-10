#include <iostream>

using namespace std;

int main(){
    double a, b, c;
    char opr;

    cout << "Simple Calculator\n" << endl;

    // Looping program
    while(true){

    cout << "Input a = ";
    cin >> a;
    cout << "Opr is ";
    cin >> opr;
    cout << "Input b = ";
    cin >> b;

    // Formula on If Else statement
        if(opr == '+'){
            c = a + b;
        }
        else if(opr == '-'){
            c = a - b;
        }
        else if(opr == 'x'){
            c = a * b;
        }
        else if(opr == ':'){
            c = a / b;
        }
        else{
            break;
        }
        cout << a << opr << b << " = " << c << endl << endl;
    }
    // Output
    cout << "Program Finished" << endl;
    
    cin.get();
    return 0;
}
