#include<iostream>
#include<queue>
#include<utility>
#include<tuple>
#define MAX 51

using namespace std;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0,1,0,-1};
int t, n, m, k;

int arr[MAX][MAX], visited[MAX][MAX];

void dfs(int y, int x) {
    visited[y][x] = 1;
    
    for(int i = 0; i < 4; i++) {
        int ny = dy[i] + y;
        int nx = dx[i] + x;
        if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
        if(visited[ny][nx] != 0) continue;
        if(arr[ny][nx] == 0) continue;
        visited[ny][nx] = 1;
        dfs(ny, nx);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> t;
    
    while(t--) {
        cin >> m >> n >> k;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            fill(arr[i], arr[i] + m, 0);
            fill(visited[i], visited[i] + m, 0);
        }
        
        
        while(k--) {
            int y, x;
            cin >> x >> y;
            arr[y][x] = 1;
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!visited[i][j] && arr[i][j] == 1) {
                    ans++;
                    dfs(i, j);
                }
            }
        }
        
        cout << ans << '\n';
        
    
    }
    return 0;
}
