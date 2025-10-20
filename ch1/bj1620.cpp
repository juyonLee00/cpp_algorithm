#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, tc;
    cin >> n >> tc;

    unordered_map<string, int> um1;
    unordered_map<int, string> um2;

    for(int i=1; i<=n; i++) {
        string str;
        cin>>str;
        um1.insert({str,i});
        um2.insert({i,str});
    }

    while(tc--){
        string str;
        cin>>str;
        if(atoi(str.c_str())){
            int num=atoi(str.c_str());
            auto it = um2.find(num);
            cout << it->second << '\n';
        }
        else {
            auto it = um1.find(str);
            cout << it->second << '\n';
        }
    }
}