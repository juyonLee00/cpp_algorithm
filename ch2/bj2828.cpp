#include<iostream>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int m, n, j, r, l, ans = 0;
    
    cin >> n >> m >> j;
    
    l = 1;
    
    while(j--) {
        int num;
        cin >> num;
        
        int r = l + m - 1;
        
        if(l <= num && num <= r) continue;
        else {
            if(num < l) {
                ans += (l - num);
                l = num;
            }
            else if(r < num) {
                ans += (num - r);
                l += (num - r);
            }
        }
        
    }
    cout << ans;
    return 0;
}
