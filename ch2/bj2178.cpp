#include<iostream>
#include<queue>
#include<utility>
#include<string>
#include<tuple>

using namespace std;

int dy[] = {1,0,-1,0};
int dx[] = {0,1,0,-1};

int arr[103][103], visited[103][103];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;

        for(int j = 0; j < m; j++) {
            arr[i][j] = str[j] - '0';
        }
    }

    visited[0][0] = 1;
    queue<pair<int, int>> q;
    q.push({0, 0});

    while(!q.empty()) {
        int y, x;
        tie(y, x) = q.front();
        q.pop();

        for(int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if(visited[ny][nx] != 0) continue;
            if(arr[ny][nx] == 0) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    cout << visited[n-1][m-1] << '\n';
    return 0;
}
