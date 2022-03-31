#include <bits/stdc++.h>
using namespace std;
#define int long long 

#define endl "\n"

void performPrefixSum(vector<vector<int>>& arr, int N, int M) {
    // Left-Right Prefix Sum
    for(int i = 0; i < N; i ++) {
        for(int j = 1; j < M; j ++) {
            arr[i][j] += arr[i][j-1];
        }
    }
    // Top-Down Prefix Sum
    for(int j = 0; j < M; j ++) {
        for(int i = 1; i < N; i ++) {
            arr[i][j] += arr[i-1][j];
        }
    }
}

void solve() {
    int N, M, U, Q;
    cin >> N >> M >> U >> Q;
    vector<vector<int>> arr(N, vector<int>(M, 0));
    for(int i = 0; i < N; i ++) {
        for(int j = 0; j < M; j ++) cin >> arr[i][j];
    }
    int k, r1, r2, c1, c2;
    // Modifications
    vector<vector<int>> B(N, vector<int>(M, 0));
    while(U --) {
        cin >> k >> r1 >> c1 >> r2 >> c2;
        B[r1][c1] += k;
        if(c2 + 1 < M) B[r1][c2 + 1] -= k;
        if(r2 + 1 < N) B[r2 + 1][c1] -= k;
        if(r2 + 1 < N && c2 + 1 < M) B[r2 + 1][c2 + 1] += k;
    }
    performPrefixSum(B, N, M);
    for(int i = 0; i < N; i ++) {
        for(int j = 0; j < M; j ++) {
            arr[i][j] += B[i][j];
        }
    }
    performPrefixSum(arr, N, M);
    // Query
    while(Q --) {
        cin >> r1 >> c1 >> r2 >> c2;
        int ans = arr[r2][c2];
        if(r1 >= 1) ans -= arr[r1 - 1][c2];
        if(c1 >= 1) ans -= arr[r2][c1 - 1];
        if(r1 >= 1 && c1 >= 1) ans += arr[r1 - 1][c1 - 1];
        cout << ans << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}