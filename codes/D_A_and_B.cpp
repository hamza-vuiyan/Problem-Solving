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

vector<ll> preSufCalc(string str, char c){
    ll n = str.size();
    vector<ll> result(n);
    ll count = 0;

    str[0] == c ? count = 1:0;
    result[0] = 0;

    for(ll i = 1; i < n; i++){
        if(str[i] != c){
            result[i] = result[i-1] + count;
        }
        else{
            count++;
            result[i] = result[i-1];
        }
    }
    return result;
}

void solve(){
    ll n; cin >> n;
    string str; cin >> str;
    ll operations = 0;
    n = str.size();
    string str2 = str;
    reverse(all(str2));

    vector<ll> prefixA(n), suffixA(n), prefixB(n), suffixB(n);

    prefixA = preSufCalc(str, 'a');
    suffixA = preSufCalc(str2, 'a');
    
    prefixB = preSufCalc(str, 'b');
    suffixB = preSufCalc(str2, 'b');

    reverse(all(suffixA));
    reverse(all(suffixB));
   
    ll ans = LONG_LONG_MAX;
    bool f = false;

    for(ll i = 0; i < n-1; i++){
        ans = min(ans, suffixA[i+1]+prefixA[i]);
        f = true;
    }
    for(ll i = 0; i < n-1; i++){
        ans = min(ans, suffixB[i+1]+prefixB[i]);
        f = true;
    }

    if(!f) ans = 0;

    cout << ans << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    signed t; cin >> t;
    while(t--)  solve();
}