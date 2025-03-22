/*
#include <iostream>
int main() {
    int x;
    std :: cin >> x;
    std :: cout << x << std :: endl;
    return 0;
}
*/

#include <iostream>
using namespace std;
int main() {
    int x;
    char c;
    double d;
    cin >> x >> c >> d;
    cout << x << " " << c << endl;
    cout << x << " " << c << " " << d << endl;
    int ascii = c;
    cout << ascii << endl;
    cout << (int)c << endl; // typecasting
    int y = 65;
    cout << (char)y << endl;
    return 0;
}