#include<iostream>
#include<string>

using namespace std;

int arr[101];
int start, leave, a, b, c, ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b >> c;

    for(int i = 0; i < 3; i++) {
        cin >> start >> leave;
        for(int j = start; j < leave; j++)
            arr[j]++;
    }

    for(int i = 0; i < 101; i++) {
        switch(arr[i])
        {
            case 1 :
                ans += a;
                break;
            case 2 :
                ans += b * 2;
                break;
            case 3 :
                ans += c * 3;
                break;
            default :
                break;
        }
    }
    cout << ans;
    return 0;
}