#include<iostream>
#include<utility>
#include<algorithm>
#define MAX 101

using namespace std;

int m, n, k;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

vector<int> area_num;
int area_sum;

int arr[MAX][MAX];
int visited[MAX][MAX];

int dfs(int y, int x) {
    visited[y][x] = 1;
    
    int result = 1;
    
    for(int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if(ny < 0 || ny >= m || nx < 0 || nx >= n) continue;
        if(!visited[ny][nx] && arr[ny][nx] == 0) {
            result += dfs(ny, nx);
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> m >> n >> k;
    
    while(k--) {
        int nx1, nx2, ny1, ny2;
        
        cin >> nx1 >> ny1 >> nx2 >> ny2;
        
        for(int i = nx1; i < nx2; i++) {
            for(int j = ny1; j < ny2; j++) {
                arr[j][i] = 1;
            }
        }
    }
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(!visited[i][j] && arr[i][j] != 1) {
                area_num.push_back(dfs(i, j));
            }
        }
    }
    
    cout << area_num.size() << '\n';
    
    sort(area_num.begin(), area_num.end());
    
    for(int i = 0; i < area_num.size(); i++) {
        cout << area_num[i] << ' ';
    }
    return 0;
    
}
