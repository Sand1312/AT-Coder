#include <iostream>
using namespace std;
signed main() {
    int mx1 = -1e9 - 1, mx2 = -1e9 - 1;
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > mx1) mx1 = x;
    }
    for (int i = 0; i< n; i++){
        cin >> x;
        if (x > mx2) mx2 = x;
    }
    cout << mx1 + mx2;
}
