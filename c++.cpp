#include <iostream>
using namespace std;

int main() {

int number = 1;

switch (number) {

    case 1:
    cout << ("We're inside case 1") << endl;
    break;

    case 2:
    cout << ("We're inside case 2") << endl;
    break;
    
    case 3:
    cout << ("We'ere inside case 3") << endl;
    break;
    
    case 4:
    cout << ("We're inside case 4") << endl;
    break;
    
    default:
    cout << ("Default") << endl;
}
    return 0;
}

// you cant use codition like number < 0