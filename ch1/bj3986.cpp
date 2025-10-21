#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc, ans=0;
    cin >> tc;
    while(tc--){
        stack<char> st;
        string str;
        cin >> str;
        
        for(int i=0; i<str.size(); i++) {
            if(st.empty()) {
                st.push(str[i]);
            }
            else{
                if(st.top() == str[i]) {
                    st.pop();
                    continue;
                }
                else
                st.push(str[i]);
            }
        }
        if(st.empty())
            ans++;
        else
            continue;
    }
    cout << ans;
}