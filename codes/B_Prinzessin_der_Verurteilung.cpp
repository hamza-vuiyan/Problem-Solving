// // In The Name of Almighty Allah

// #include <bits/stdc++.h>
// using namespace std;

// #define ll      	    long long
// #define star    	    cerr << "*\n"; 
// #define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
// #define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
// #define all(x)              x.begin(), x.end()
// #define rall(x)             x.rbegin(), x.rend()
// #define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';
// #define cerrn		    cerr << '\n';
// #define ceil(x, y)          (x/y) + (x%y != 0)

// void solve(){
//     int n; cin >> n;
//     string str; cin >> str;
//     n = str.size();



//     for(char i = 'a'; i <= 'z'; i++){
//         if(str.find(i) == string::npos){
//             cout << i << '\n';
//             return;
//         }
//     }


//     for(char i = 'a'; i <= 'z'; i++){
//         for(char j = 'a'; j <= 'z'; j++){
//             string res = "";
//             res+=i;
//             res+=j;
//             if(str.find(res) == string::npos){
//                 cout << res << '\n';
//                 return;
//             }
            
//         }
//     }

//     for(char i = 'a'; i <= 'z'; i++){
//         for(char j = 'a'; j <= 'z'; j++){
//             for(char k = 'a'; k <= 'z'; k++){
//                 string res = "";
//                 res+=i;
//                 res+=j;
//                 res+=k;
//                 if(str.find(res) == string::npos){
//                     cout << res << '\n';
//                     return;
//                 }
//             }
            
//         }
//     }

// }

// signed main(){
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//     signed t; cin >> t;
//     while(t--)  solve();
// }


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


// string buildstr(int k){
//     string ans = "";
//     if(k == 0) return ans;
//     ans = buildstr((k-1)/26);
//     ans += ('a' + (k-1)%26);
//     return ans;
// }

string buildstr(int k){
    string ans = "";
    while(k > 0){
        k--;
        ans += ('a' + (k % 26));
        k /= 26;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

void solve(){
    int n; cin >> n;
    string str; cin >> str;
    n = str.size();

    int k = 1;
    
    while(true){
        string newstr = buildstr(k);
        if(str.find(newstr) == string::npos){
            cout << newstr << '\n';
            return;
        }
        k++;
    }

}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    signed t; cin >> t;
    while(t--)  solve();
}