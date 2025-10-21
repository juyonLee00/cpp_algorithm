#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,arr[15004];
    cin >> n >> m;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int ans=0;

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i]+arr[j] == m){
                ans++;
            }
        }
    }
    cout<<ans;
}