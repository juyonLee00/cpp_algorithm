#include<iostream>
#include<algorithm>

using namespace std;

int arr[9];
int sum;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
        

    for(int i = 0; i < 8; i++) {
        for(int j = i + 1; j < 9; j++) {
            if(sum - arr[i] - arr[j] == 100) {
                arr[i] = arr[j] = 101;
                sort(arr, arr + 9);
                for(int k = 0; k < 7; k++) {
                    cout << arr[k] << '\n';
                }
                return 0;
            }
        }
    }
}