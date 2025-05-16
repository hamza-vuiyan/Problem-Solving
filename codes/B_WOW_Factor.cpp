// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

void solve(){
    string str; cin >> str;
    string newstr = "";
    ll n = str.size();

    for(ll i = 0; i  < n; i++){
        ll count = 0;
        while(str[i] == 'v' and i < n){
            count++;
            i++;
        }
        while(count-- > 1)  newstr+='w';
        newstr+=str[i];
    }

    ll m = newstr.size();

    vector<ll> prefix(m);
    vector<ll> suffix(m);
    
    ll c = 0;
    for(ll i = 0; i < m; i++){
        if(newstr[i] == 'w'){
            prefix[i] = c+=1;
        }
        else prefix[i] = c;
    }
    c = 0;
    for(ll i = m-1; i >= 0; i--){
        if(newstr[i] == 'w'){
            suffix[i] = c+=1;
        }
        else suffix[i] = c;
    }


    ll ans = 0;
    for(ll i = 0; i < m; i++){
        if(newstr[i] == 'o'){
            ans+=(suffix[i]*prefix[i]);
        }
    }

    cout << ans << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}