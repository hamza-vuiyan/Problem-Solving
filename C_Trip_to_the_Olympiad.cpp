// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll low,  high; cin >> low >> high;
    string ans = "";
    ll i;

    for(i = 30; i >= 0; i--){
        ll a = 0, b = 0;
        ll test = (1 << i);
        if(low & test){
            a = 1;
        }
        if(high & test){
            b = 1;
        }
        if (a == b){
            ans += a+'0';
        }
        else{
            ans+= a+'1';
            break;
        }
    }
    while(i--){
        ans+='0';
    }
    ll first = 0;
    double k = 0;
    for(ll i = 30; i >= 0; i--){
        first+= ((ans[i]-'0')* pow(2.00, k));
        k++;
    }
    ll second = first -1;
    ll third ;
    for(ll i = low ; i <= high; i++) {
        if(i != first && i != second){
            third = i;
            break;
        }
    }
    cout << first << ' ' << second << ' ' << third << '\n';

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