#include<iostream>
#include<cmath>
#include<unordered_map>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    unordered_map<string, int> mp;
    
    int n, m, ans = 0;
    
    cin >> n >> m;
    
    for(int i = 0; i < n; i++) {
        string str = "";
        
        cin >> str;
        
        mp[str]++;
    }
    
    for(int i = 0; i < m; i++) {
        string str = "";
        cin >> str;
        
        if(mp[str]) {
            ans += mp[str];
        }
    }
    cout << ans;
    return 0;
}
