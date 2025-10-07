// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      	    long long
#define star    	    cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';
#define cerrn		    cerr << '\n';
#define ceil(x, y)          (x/y) + (x%y != 0)

void solve(){
    int n; cin >> n;
    int arr[n][n];
    string str;
    for(int i = 0; i < n; i++){
        cin >> str;
        for(int j = 0; j < n; j++){
           arr[i][j] = str[j] - '0';
        }
    }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //        cout << arr[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int one = 0, zero = 0;

            int pos1 = arr[i][j];
            int pos2 = arr[j][n-1-i];
            int pos3 = arr[n-1-i][n-1-j];
            int pos4 = arr[n-1-j][i];

            if(pos1 == 1) one++;
                else zero++;
            if(pos2 == 1) one++;
                else zero++;
            if(pos3 == 1) one++;
                else zero++;
            if(pos4 == 1) one++;
                else zero++;
            ans+=min(zero, one);

            // cerr << one << ' ' << zero << '\n';
            
        }
    }

    cout << ans/4 << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    signed t; cin >> t;
    while(t--)  solve();
}