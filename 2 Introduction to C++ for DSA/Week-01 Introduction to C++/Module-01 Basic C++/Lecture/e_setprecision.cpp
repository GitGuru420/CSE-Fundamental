#include <iostream>
#include <iomanip>  // iomanip -> input output manipulators (this header file for setprecision)
using namespace std;
int main() {
    // double d = 23.4567;
    // cout << d << endl;
    double d = 23.45676;
    // cout << d << endl;
    cout << fixed << setprecision(2) << d << endl;
    cout << fixed << setprecision(3) << d << endl;
    return 0;
}