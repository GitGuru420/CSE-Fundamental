#include <iostream>
using namespace std;
int main() {
    char grade; cin >> grade;
    switch(grade) {
        case 'A':
            cout << "Excellent!\n"; break;
        case 'B':
            cout << "Very good!\n"; break;
        case 'C':
            cout << "Good job!\n"; break;
        default:
            cout << "Invalid grade\n";
    }
    return 0;
}