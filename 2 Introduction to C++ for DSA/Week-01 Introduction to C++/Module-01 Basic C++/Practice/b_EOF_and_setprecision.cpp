#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // EOF
    /*
    int a;
    while(cin >> a) {
        cout << a << endl;
    }
    */

    // setprecision
    double d;   cin >> d;
    cout << fixed << setprecision(5) << d << endl;
    return 0;
}