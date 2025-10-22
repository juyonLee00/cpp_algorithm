#include<iostream>
#include<utility>
#include<tuple>
#include<algorithm>
#define MAX 101

using namespace std;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int arr[MAX][MAX], visited[MAX][MAX];
int n, ans, tmp;

void dfs(int y, int x, int limit) {
    for(int i = 0; i < 4; i++) {
        int ny = dy[i] + y;
        int nx = dx[i] + x;
        
        if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
        if(!visited[ny][nx] && arr[ny][nx] > limit) {
            visited[ny][nx] = 1;
            dfs(ny, nx, limit);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    
    int min_num = 101, max_num = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
            min_num = min(min_num, arr[i][j]);
            max_num = max(max_num, arr[i][j]);
        }
    }

    for(int k = min_num; k < max_num; k++) {
        tmp = 0;
        
        for(int l = 0; l < n; l++)
            fill(visited[l], visited[l] + n, 0);
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(!visited[i][j] && arr[i][j] > k) {
                    tmp++;
                    dfs(i, j, k);
                }
            }
        }
        ans = max(tmp, ans);
        
    }
    if(ans == 0) cout << 1 << '\n';
    else cout << ans << '\n';
    return 0;
}
