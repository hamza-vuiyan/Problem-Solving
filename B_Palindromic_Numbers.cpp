// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 

string pall(string str){
    
    char mx = *max_element(str.begin(), str.end());
    char start = str[0];
    ll sz = str.size();
    string target = "";
    int i = 0;
    string result = "";
    if(start == '9'){
        while(i <= sz){
            target+='1';
            i++;
        }
        str = "0" + str;

        int carry = 0;
        for(int i = target.size()- 1; i > 0; i--){
            int tr = 1;
            int st = str[i] - '0';
            int diff;
            if(st > tr){
                diff = 11-(carry+st);
                carry = 1;
            }
            else{
                if((st+carry) <= tr){
                    diff = 1-(st+carry); 
                    carry = 0;
                }
                else{
                    diff = 11 - (st+carry);
                    carry = 1;
                }
            }
            result+=(diff+'0');
        }
        reverse(result.begin(), result.end());
    }
    else{
        char add = '9';
        while(i < sz){
            target+=add;
            i++;
        }
        
        int carry = 0;
        for(int i = target.size()- 1; i >= 0; i--){
            char tr = '9' - '0';
            char st = str[i] - '0';
            int res;
            if(tr < (st+carry)){
                res = (10+tr) - (st+carry);
                carry = 1;
            }
            else{
                res = tr - (st+carry);
                carry  = 0;
            }
            result+=(res+'0');
        }
        reverse(result.begin(), result.end());
    }
   return result;
}

void solve(){
    ll n; cin >> n;
    string number; cin >> number;
    int i = 0;
    string res = pall(number);
    cout << res << '\n';
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