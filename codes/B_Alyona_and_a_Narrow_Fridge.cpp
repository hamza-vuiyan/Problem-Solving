// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()

int find(vector<int>& temp, int height){

    int n = temp.size();


    sort(all(temp));

    for(int i = n-1; i >=0; i-=2){
        height-=temp[i];
    }

    if(height>= 0) return 1;
    else return 0;


}


void solve(){
    int n, h; cin >> n >> h;

    vector<int> v(n);
    for(auto &i: v) cin >> i;

    vector<int> temp;
    int ans = 0;

    for(int i = 0; i < n; i++){
        temp.push_back(v[i]);
        if(find(temp, h)){
            ans = i+1;
        }
        else break;
    }

   cout << ans << '\n';

}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}