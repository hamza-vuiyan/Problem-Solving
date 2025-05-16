// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    string str; cin >> str;
    map<char, int> mp;
    for(auto it: str){
        mp[it]++;
    }
    char sing = '0';
    for(auto &it: mp){
        if(it.second == 1){
            sing = it.first;
             continue;
        }
        it.second = it.second/2;
    }

    string ans = "";

    for(auto it: mp){
        if(it.first == sing) continue;
        for(int i = 1; i <= it.second; i++){
            ans+=it.first;
        }
    }
    string ans2 = ans;
    if(sing != '0')
        ans+=sing;
        
    reverse(ans2.begin(), ans2.end());

    cout  << ans+ans2 << endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}