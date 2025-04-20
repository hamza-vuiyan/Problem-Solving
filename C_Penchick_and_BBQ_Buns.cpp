// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n; cin >> n;
    if(n&1 and n < 27){
        cout << -1 << '\n';
    }
    else if(n&1){
        int arr[27] = {1 , 2 , 3, 4, 5, 6, 7, 8, 9, 1 , 2 , 3 , 4, 5, 6, 7, 8, 9, 10, 10, 11, 11, 12, 13, 13, 1, 12};
        for(int i = 0; i < 27; i++) cout << arr[i] << " ";
        int rem = (n - 27)/2;
        int k = 14;
        while(rem--){
            cout << k <<  " " << k << " ";
            k++;
        }
        cout << '\n';

    }
    else{
        int lop = n/2;
        int val = 1;
        while(lop--){
            cout << val <<  " " << val << " ";
            val++;
        }
    }
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}