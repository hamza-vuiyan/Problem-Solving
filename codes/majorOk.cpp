// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
	

void solve(){
    int n, k; cin >> n >> k;
    int odd;
    int l = (n-k+1);
    int r = n;
    int total = (r-l)+1;
    if(l%2 == 0){
        odd = total/2;
    }
    else{
        if(total%2 == 0){
            odd = total/2;
        }
        else{
            odd = (total/2)+1;
        }
    }
    cout << (odd&1 ? "NO\n":"YES\n");

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