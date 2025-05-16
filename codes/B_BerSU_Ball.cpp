// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << i << " = " << x << '\n';
// #define cerr(x)             cerr << x << '\n';
#define sort(x)             sort(x.begin(), x.end())

void solve(){
    int n, m;

    cin >> n;
    vector<int> male(n);
    for(auto &i: male)  cin >> i;

    cin >> m;
    vector<int> female(m);
    for(auto &i: female)    cin >> i;

    sort(male);
    sort(female);
    
    int  ans  = 0;

    if(n < m){
        for(int i = 0; i < n; i++){
            bool f = false;
            for(int j = 0; j < m; j++){
                if(female[j] == -1) continue;
                if(male[i]-1 == female[j]){
                    ans++;
                    female[j] = -1;
                    f = true;
                    break;
                }
            }
            if(!f){
                for(int j = 0; j < m; j++){
                    if(female[j] == -1) continue;
                    if(male[i] == female[j]){
                        ans++;
                        female[j] = -1;
                        f = true;
                        break;
                    }
                } 
            }
            if(!f){
                for(int j = 0; j < m; j++){
                    if(female[j] == -1) continue;
                    if(male[i]+1 == female[j]){
                        ans++;
                        female[j] = -1;
                        f = true;
                        break;
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    else{
        for(int i = 0; i < m; i++){
            bool f = false;
            for(int j = 0; j < n; j++){
                if(male[j] == -1) continue;
                if(female[i]-1 == male[j]){
                    ans++;
                    male[j] = -1;
                    f = true;
                    break;
                }
            }
            if(!f){
                for(int j = 0; j < n; j++){
                    if(male[j] == -1) continue;
                    if(female[i] == male[j]){
                        ans++;
                        male[j] = -1;
                        f = true;
                        break;
                    }
                } 
            }
            if(!f){
                for(int j = 0; j < n; j++){
                    if(male[j] == -1) continue;
                    if(female[i]+1 == male[j]){
                        ans++;
                        male[j] = -1;
                        f = true;
                        break;
                    }
                }
            }
        }
        cout << ans << '\n';
    }


}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}