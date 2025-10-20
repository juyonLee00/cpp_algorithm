#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;
int k=2;
int n=9;
int sum;

void combi(int start, vector<int>& b) {
    if(b.size() == k) {
        if(sum-v[b[0]]-v[b[1]]==100) {
            v[b[0]]=v[b[1]]=101;
            sort(v.begin(), v.end());

            for(int i=0; i<7; i++)
                cout << v[i] << '\n';
            exit(0);
        }
        return;
    }
    for(int i=start+1; i<n; i++){
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(int i=0; i<n; i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
        sum+=n;
    }
    vector<int> b;
    combi(-1, b);
}