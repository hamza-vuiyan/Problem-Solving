// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define star    		    cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';
#define cerrn		        cerr << '\n';


void solve(){
    int a[2][2], b[2][2], c[2][2];
    for(int i = 0; i < 2; i++){  
        for(int j= 0; j < 2; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 2; i++){  
        for(int j= 0; j < 2; j++){
            cin >> b[i][j];
        }
    }
    for(int i = 0; i < 2; i++){  
        for(int j= 0; j < 2; j++){
            c[i][j] = 0;
        }
    }
    
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                c[i][j] += a[i][k] * b[k][j];

    for(int i = 0; i < 2; i++){  
        for(int j= 0; j < 2; j++){
            cout << c[i][j] << ' ';
        }
        cout << '\n';
    }
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}