#include <iostream>
using namespace std;
int main() {
    int n;  cin >> n;
    /*
    if(n%2 == 0)
        cout << "The number is Even" << endl;
    else
        cout << "The number is Odd" << endl;
    */

    // ternary operator
    (n%2 == 0) ? cout << "The number is Even" << endl : cout << "The number is Odd" << endl;
    return 0;
}