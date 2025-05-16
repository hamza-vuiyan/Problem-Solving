// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
	

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for (auto &i: v){
        cin >> i;
        sum+=i;
    }
    if(n < 3){
        cout << -1 << '\n';
        return;
    }
    sort(v.begin(), v.end());
    double avg = (double)sum/n;
    bool f = false;
    if(sum%n == 0) f = true;
    ll unhappy = 0;

    for(auto it: v){
        if(it > (avg/2)) break;
        if(f){
            if(it < (avg/2))
                unhappy++;
        } 
        else{
            if(it <= (avg/2))
                unhappy++;
        }
    }
    ll unhappyNeeded = (n/2)+1;
    
    if(unhappy >= unhappyNeeded){
        cout << 0 << '\n';
        return;
    }
    ll tindx = (n/2);

    ll ans = (n*(v[tindx]*2))+1 - sum;
    cout << ans << '\n';


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