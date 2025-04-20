// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 

bool check(string& str, int i, int n){
    if(i > 2 and str[i] == '0' and str[i-1] == '0' and str[i-2] == '1' and str[i-3] == '1'){
        return true;
    }
    else if(i > 1 and i < n-1 and str[i] == '0' and str[i+1] == '0' and str[i-1] == '1' and str[i-2] == '1'){
        return true;
    }
    else if(i < n-3 and str[i] == '1' and str[i+1] == '1' and str[i+2] == '0' and str[i+3] == '0'){
        return true;
    }
    else if(i > 0 and i < n-2 and str[i] == '1' and str[i-1] == '1' and str[i+1] == '0' and str[i+2] == '0'){
        return true;
    }
    else return false;
}

void solve(){
    string str; cin >> str;
    int n = str.size();
    int q; cin >> q;
    int i;
    char v;
    int cnt = 0;

    for(int i = 0; i < n-3; i++){
        if(str[i] == '1' and str[i+1] == '1' and str[i+2] == '0' and str[i+3] == '0'){
            cnt++;i+=3;
        }
    }

    while(q--){
        cin >> i >> v;
        --i;
        if(check(str, i, n)){
            str[i] = v;
            if(check(str, i , n)){
                cout << "YES\n";
                continue;
            }
            else cnt == 0 ? 0:cnt--;
            if(cnt) cout << "YES\n";
            else cout << "NO\n";
        }
        else{
            str[i] = v;
            if(check(str, i , n)) cnt++;
            if(cnt) cout << "YES\n";
            else cout << "NO\n";
        }
        
    }
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