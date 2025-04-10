// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 

map<int, int> mpNew;
map<int, int> mpOld;

int search(vector<int>& v, int key, int n){
    int l = 0, r = n-1;
    int ans = 0;
    while(l <= r){
        int mid = l + (r-l)/2;

        if(v[mid]<=key){
            if(mpNew[v[mid]] < mpOld[v[mid]]){
                ans = v[mid];
                l = mid+1;
            }
            
        }
        else r = mid - 1;
    }
    mpNew[ans]++;

    return ans;
}

void solve(){
    int n, m; cin >> n >> m;
    vector<int> v(n);
    vector<int> c(m);
    for(auto &i: v){
        cin >> i;
        mpOld[i]++;
    }
    for(auto &i: c) cin >> i;
    sort(v.begin(), v.end());

    for(int i = 0; i < m; i++){
        int val = search(v, c[i], n);
        if(val){
            if(mpNew[val] < mpOld[val]){
                cout << val << '\n';
                mpNew[val]++;
            }
            else{
                cout << -1 << '\n';
            }
        }
    }

}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
