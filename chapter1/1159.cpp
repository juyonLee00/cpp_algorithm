#include<iostream>
#include<string>

using namespace std;

int arr[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    bool isAns = false;

    cin >> n;
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        arr[str[0] - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        if(arr[i] >= 5) {
            isAns = true;
            cout << (char)('a'+i);
        }
    }
    if(!isAns)
        cout << "PREDAJA";
}