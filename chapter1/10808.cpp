#include<iostream>
#include<string>

using namespace std;

int arr[26];
string str = "";

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str;

    for(int i = 0; i < str.size(); i++) {
        arr[str[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++)
        cout << arr[i] << ' ';
    return 0;
}