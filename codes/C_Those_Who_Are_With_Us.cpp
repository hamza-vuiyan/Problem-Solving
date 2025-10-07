// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
#define cerrPair(x)          for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

void solve(){
    int n, m; cin >> n >> m;
    int arr[n][m];
    int mx = -1;
    int mxc = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            mx = max(mx, arr[i][j]);
        }
    }

    vector<int> row(n), col(m);
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < m; j++){
            if(arr[i][j] == mx) count++;
        }
        row[i] = count;
    }

    for(int i = 0; i < m; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[j][i] == mx) count++;
        }
        col[i] = count;
    }

    for(auto it: row) mxc+=it;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int cc = row[i]+col[j];
            if(arr[i][j] == mx) --cc;
            if(cc== mxc){
                cout << mx-1 << '\n';
                return;
            }
        }
    }

    cout << mx << '\n';
}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	ll t;  cin >> t;
	while (t--)  solve();
}