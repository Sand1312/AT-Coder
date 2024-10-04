#include <iostream>
#include <vector>
using namespace std;

signed main() {
    int M;
    cin >> M;
    int pow3 = 59049;
    vector <int> ans;
    for (int i = 10; i >=0;i--){
        while (M >= pow3) M -= pow3, ans.push_back(i);
        pow3/=3;
    }
    cout << ans.size() << '\n';
    for (int i = 0; i< ans.size(); i++) cout << ans[i] << ' ';
}
