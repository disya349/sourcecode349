#include <iostream>

using namespace std;

int main(){
    // Declare n
    int n;

    // Title
    cout << "Different types of Triangle\n" << endl;
    
    // Define n
    cout << "Input your n : ";
    cin >> n;

    // Result
    cout << "\nThe result of your triangle" << endl;

    for(int x = 0; x <= n; x++){
        for(int y = 1; y <= x; y++){
            cout << "*";
        }
        cout << endl;
    }
    for(int x = 0; x <= n; x++){
        for(int y = n; y >= x; y--){
            cout << "*";
        }
        cout << endl;
    }

    for(int x = 1; x <= n; x++){
        for(int y = n; y > x; y--){
            cout << " ";
        }
        for(int z = 1; z <= x; z++){
            cout << "*";
        }
        cout << endl;
    }
    for(int x = 1; x < n; x++){
        for(int y = 1; y <= x; y++){
            cout << " ";
        }
        for(int z = n; z > x; z--){
            cout << "*";
        }
        cout << endl;
    }

    for(int x = 1; x <= n; x++){
        for(int y = n; y > x; y--){
            cout << " ";
        }
        for(int z = 1; z <= (2*x-1); z++){
            cout << "*";
        }
        cout << endl;
    }
    for(int x = 1; x <= n; x++){
        for(int y = 1; y < x; y++){
            cout << " ";
        }
        for(int z = n; z >= (2*x-n); z--){
            cout << "*";
        }
        cout << endl;
    }


    cin.get();
    return 0;
}
