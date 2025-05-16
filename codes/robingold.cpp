// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
	

void solve(){
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(auto &i: v){
        cin >> i;
    }
    int take = 0;
    int give = 0;
    for(int i = 0; i < n; i++){
        if(v[i] >= k) take+=v[i];
        else if(v[i] == 0){
            if(take > 0){
                give++;
                take--;
            } 
        } 
    }
    cout << give << '\n';
}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	ll t;
	cin >> t;
	while (t--){
		solve();
	}
}
