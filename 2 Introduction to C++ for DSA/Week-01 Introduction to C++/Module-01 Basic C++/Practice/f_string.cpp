#include <iostream>
using namespace std;
int main() {
    int x;  cin >> x;
    cin.ignore();
    char s[100];    // cin >> s;
    cin.getline(s,100);
    cout << x << " " << s << endl;

    string s2;  cin >> s2;
    cout << s2 << endl;
    return 0;
}