#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string str1, str2;
int ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str1;
    str2 = str1;

    reverse(str2.begin(), str2.end());

    ans = str1 == str2 ? 1 : 0;

    cout << ans;
    return 0;
}