#include <iostream>
#include <stack>
#include <vector>
using namespace std;

signed main() {
    int n;
    cin >> n;
    vector <int> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];
    vector <int> ans(n);
    stack <int> H;
    for (int i = n - 1; i>=0;i--){
        ans[i] = H.size();
        while(!H.empty() && H.top() < c[i]) H.pop();
        H.push(c[i]);
    }
    for (int &x: ans) cout << x << ' ';

}
