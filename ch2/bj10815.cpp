#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, m;
    
    cin >> n;
    
    unordered_map<int, int> mp;
    
    for(int i = 0; i < n; i++) {
        int cnt;
        cin >> cnt;
        mp[cnt]++;
    }
    cin >> m;
    
    for(int i = 0; i < m; i++) {
        int cnt;
        cin >> cnt;
        
        if(mp[cnt]) {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
        cout << ' ';
    }
}
