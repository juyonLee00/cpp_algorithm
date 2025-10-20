#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[26]={0};

    for(int i=0; i<n; i++) {
        string str;
        cin >> str;
        arr[str[0]-'a']++;
    }

    string ans="";

    for(int i=0; i<26; i++){
        if(arr[i]>=5){
            ans += ('a'+i);
        }
            
    }

    if(ans=="") cout<<"PREDAJA";
    else cout<<ans;
}