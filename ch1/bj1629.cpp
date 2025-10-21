#include<iostream>

using namespace std;

long long a, b, c;

long long multiple(long long a, long long b) {
    if(b==1) return a%c;

    long long ret = multiple(a, b/2);
    ret = (ret * ret) % c;
    if(b%2)ret = (ret * a) % c;
    return ret;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> c;

    cout << multiple(a, b) << '\n';
}