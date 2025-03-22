#include <iostream>
#include <algorithm> // for min, max and swap function
using namespace std;
int main() {
    int a, b;   cin >> a >> b;
    /*
    if(a<b)
        cout << "Min: " << a << endl;
    else
        cout << "Min: " << b << endl;
    */
    cout << "Min: " << min(a,b) << endl;
    cout << "Max: " << max(a,b) << endl;
    cout << "Min: " << min({12, 15, 9, 20, 6}) << endl;
    cout << "Max: " << max({12, 15, 9, 20, 6}) << endl;

    /*
    int temp = a;
    a = b;
    b = temp;
    */

    swap(a, b);
    cout << a << " " << b;
    
    return 0;
}