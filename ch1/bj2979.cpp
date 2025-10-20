#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin>>a>>b>>c;
    int arr[101]={0};

    for(int i=0; i<3; i++)
    {
        int start, end;
        cin>>start>>end;
        for(int j=start; j<end; j++)
            arr[j]++;
    }
    int ans=0;
    for(int i=0; i<101; i++) {
        switch(arr[i]){
            case 1 : ans+=(1*a);continue;;
            case 2: ans+=(2*b);continue;;
            case 3: ans+=(3*c);continue;;
            default : continue;
        }
    }
    cout << ans;
}