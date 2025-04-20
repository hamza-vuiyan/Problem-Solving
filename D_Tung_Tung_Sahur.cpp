// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    string str, str2;
    cin >> str >> str2;
    
    int i = 0, j = 0;
    while (i < str.size() and j < str2.size())
    {
        int count1 = 0, count2 = 0;
        if(str[i] == 'L'){
            while(i < str.size() and str[i] == 'L'){
                count1++;
                i++;
            }
            while(j < str2.size() and str2[j] == 'L'){
                count2++;
                j++;
            }
            if(count1 > count2 or (count1*2) < count2){
                cout << "NO\n";
                return;
            }
        }
        else{
            while(i < str.size() and str[i] == 'R'){
                count1++;
                i++;
            }
            while(j < str2.size() and str2[j] == 'R'){
                count2++;
                j++;
            }
            if(count1 > count2 or (count1*2) < count2){
                cout << "NO\n";
                return;
            }
        }
    }
    if(i < str.size() or j < str2.size()) cout << "NO\n";
    else cout << "YES\n";
    
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