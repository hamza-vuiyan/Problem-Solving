
// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 



void divisors(const map<ll, ll>& mp, ll k){
    vector<ll> divarr = {1};
    for(auto it: mp){
        ll base = it.first; 
        ll exp = it.second;
        vector<ll> current = divarr;
        for(int e = 1; e <= exp; e++){
            ll value = pow(base, e);
            for(auto it: current){
                divarr.push_back(it*value);
            }
        }
    }
   sort(divarr.begin(), divarr.end());
   ll s = divarr.size()-1;

// for (auto it: divarr) cerr << it << ' ';
// cerr << '\n';

   for(ll i = s; i >= 0; i--){
        if(divarr[i]%k){
            cout << divarr[i] << '\n';
            return;
        }
   }

}


void primegen(ll n, ll k){
    map<ll, ll> mp;
    vector<ll> prim = {2};
    for(int i = 3; i <= n/2; i+=2){
        prim.push_back(i);
    }
    // here the main problem is generating the prime factors because 10^18 is  a large number, sqrt(10^18) is 10^9, we can't go 10^9 in 1 sec.
    // also we can't check a number is prime or not in 1 sec for number like 10^18. for checking we have to go at least sqrt(10^18) = 10^9 which
    // is also not possible in 1 seocnd.
    
    divisors(mp, k);
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--){
        ll n, k; cin >> n >> k;
        primegen(n, k);
    }
}







// // In The Name of Almighty Allah

// #include <bits/stdc++.h>
// #include <cstddef>
// using namespace std;

// #define ll      			long long
// #define errv				for(auto it: v){cerr << it << ' ';}
// #define star    			cerr << "*\n"; 
    

// void solve(){
//     ll n, k; cin >> n >> k;
//     vector<ll> v;
//     ll i = 1;
//     while(i*i < n){
//         if(n%i == 0){
//             v.push_back(i);
//             v.push_back(n/i);
//         }
//         i++;
//     }

//     sort(v.begin(), v.end());
//         errv;
//     int siz = v.size()-1;
//     for(int i = siz; i >= 0; i--){
//         if(v[i]%k){
//             cout << v[i] << '\n';
//             return;
//         }
//     }

// }

// int main(){
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//     ll t;
//     cin >> t;
//     while (t--){
//         solve();
//     }
// }











            // vector<ll> freq(2005, 0);
            // for(int i = 0; i < n; i++){
            //     freq[v[i]]++;
            //     if(freq[v[i]] > 1){
            //         cout << 0 << '\n'; return;
            //     }
            // }
            // for(int i = 0; i < n-1; i++){
            //     for(int j = i+1; j < n; j++){
            //        diff = abs(v[i]-v[j]);
            //         if(freq[diff]){
            //             cout << 0 << '\n'; return;
            //         }
            //         mn = min(mn, diff);
            //     }
            // }