#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

vector<string> split(const string& input, string delimiter) {
    vector<string> result;
    auto start=0;
    auto end=input.find(delimiter);

    while(end!=string::npos) {
        result.push_back(input.substr(start, end-start));
        start=end+delimiter.size();
        end=input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    string pt;
    cin >> pt;

    vector<string> ptv = split(pt, "*");

    while(n--){
        string str;
        cin>>str;
        if(ptv[0].size()+ptv[1].size() > str.size()) {
            cout << "NE" << '\n';
            continue;
        }
        if(str.substr(0, ptv[0].size()) == ptv[0]) {
            int firstidx = str.find(ptv[0]);
            if(str.substr(str.size()-ptv[1].size()) == ptv[1]){
                cout << "DA" << '\n';
            }
            else
                cout << "NE"<<'\n';
        }
        else
            cout <<"NE"<<'\n';
    }
}