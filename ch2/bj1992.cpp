#include<iostream>
#include<string>
#include<vector>

using namespace std;

int n;
vector<string> v;

string quard_tree(int starty, int startx, int size) {
    if(size == 1) return string(1, v[starty][startx]);
    
    char b = v[starty][startx];
    
    string ret = "";
    
    for(int i = starty; i < starty + size; i++) {
        for(int j = startx; j < startx + size; j++) {
            if(b != v[i][j]) {
                ret += "(";
                ret += quard_tree(starty, startx, size/2);
                ret += quard_tree(starty, startx + size/2, size/2);
                ret += quard_tree(starty + size/2, startx, size/2);
                ret += quard_tree(starty + size/2, startx + size/2, size/2);
                ret += ")";
                
                return ret;
            }
        }
    }
    return string(1, b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        v.push_back(str);
    }
    
    cout << quard_tree(0, 0, n);
    return 0;
}
