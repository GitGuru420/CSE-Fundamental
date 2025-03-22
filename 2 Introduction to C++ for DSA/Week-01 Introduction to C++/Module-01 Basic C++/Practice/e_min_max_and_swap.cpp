#include <iostream>
#include <algorithm>
using namespace std;
int main() {    
    int x, y;   cin >> x >> y;
    swap(x,y);
    cout << x << " " << y << endl;
    cout << min(x,y) << endl;
    cout << max(x,y) << endl;
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << min({a,b,c,d}) << endl;
    cout << max({a,b,c,d}) << endl;
    return 0;
}