#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        map<string, int> mp;
        for(int i=0; i<n; i++) {
            string str1, str2;
            cin >> str1 >> str2;
            if(mp.find(str2) == mp.end()){
                mp.insert({str2, 1});
            }
            else
                mp[str2]+=1;
        }

        int ans = 1;
        for(auto it : mp) {
            ans *= (it.second+1);
        }
        cout << ans-1 << '\n';
    }
}