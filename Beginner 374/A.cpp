#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    int ln = s.length();
    if (ln < 3 || s[ln-1] != 'n' || s[ln-2] != 'a' || s[ln-3] != 's') cout << "No";
    else cout << "Yes";
}
