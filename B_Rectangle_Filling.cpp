// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n, m; cin >> n >> m;
    char arr[n][m];
    for(int i = 0; i < n; i++){  
        for(int j= 0; j < m; j++){
            cin >> arr[i][j];
        } 
    }
    --n, --m;
    
    bool u = false, s1 = false, s2 = false, b = false;
    bool uw = false, s1w = false, s2w = false, bw = false;
    
    for(int i = 0; i <= m; i++){
        if(arr[0][i] == 'B') u = true;
        if(arr[n][i] == 'B') b = true;
             
        if(arr[0][i] == 'W') uw = true;
        if(arr[n][i] == 'W') bw = true;
    }
    for(int i = 0; i <=n; i++){
        if(arr[i][0] == 'B') s1 = true;
        if(arr[i][m] == 'B') s2 = true;

        if(arr[i][0] == 'W') s1w = true;
        if(arr[i][m] == 'W') s2w = true;
    }
    if(u and b and s1 and s2) cout << "YES\n";
    else if(uw and bw and s1w and s2w) cout << "YES\n";
    else cout << "NO\n";

}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--){
        solve();
    }
}














// // In The Name of Almighty Allah

// #include <bits/stdc++.h>
// using namespace std;

// #define ll      			long long
// #define errv				for(auto it: v){cerr << it << ' ';}
// #define star    			cerr << "*\n"; 
    

// void solve(){
//     int n, m; cin >> n >> m;
//     char arr[n][m];
//     for(int i = 0; i < n; i++){  
//         for(int j= 0; j < m; j++){
//             cin >> arr[i][j];
//         } 
//     }
//     char pv = arr[0][0];
//     int k = m-1;
//     int mrki = 0, mrkj = 0;

//     for(int i = 0; i < n; i++){
//         if(arr[i][k] == pv){
//             mrki = i; mrkj = k;
//             if(k == m-1) k = 0;
//             else k = m-1;
//         }
//     }
//     if(mrki == n-1 and (mrkj == 0 or mrkj == m-1)){
//         cout << "YES\n";
//         return;
//     }
    
//     char pvv = arr[0][m-1];
//     int x = 0;
//     int mki = n-1, mkj = m-1;

//     for(int i = 0; i < n; i++){
//         if(arr[i][x] == pvv){
//             mki = i; mkj = k;
//             if(x == m-1) x = 0;
//             else x = m-1;
//         }
//     }
    
//     if(mki == n-1 and (mkj == 0 or mkj == m-1)){
//         cout << "YES\n";
//         return;
//     }
//     cout << "NO\n";
// }

// signed main(){
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//     ll t;
//     cin >> t;
//     while (t--){
//         solve();
//     }
// }