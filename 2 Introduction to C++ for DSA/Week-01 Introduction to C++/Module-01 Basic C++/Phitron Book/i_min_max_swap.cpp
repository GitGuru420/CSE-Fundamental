#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "Min: " << min({a,b,c,d}) << endl;
    cout << "Max: " << max({a,b,c,d}) << endl;
    cout << "Min of (a,b): " << min(a,b) << endl;
    cout << "Max of (a,b): " << max(a,b) << endl;
    
    int x, y;   cin >> x >> y;
    cout << "x = " << x << " and " << "y = " << y << endl;
    swap(x,y);
    cout << "x = " << x << " and " << "y = " << y << endl;
    return 0;
}