#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 10000001

using namespace std;

int arr[MAX], psum[MAX];

int main() {
    int n,k;

    cin>>n>> k;

    for(int i=1; i<=n; i++) {
        cin>>arr[i];
        psum[i]=psum[i-1]+arr[i];
    }


    int ans= -1 * MAX;
    for(int i=k; i<=n; i++) {
        ans = max(ans, psum[i]-psum[i-k]);
    }
    cout<<ans;

}