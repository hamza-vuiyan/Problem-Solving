// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())

void bob(){
    cout << "Bob\n";
    return;
}
void alice(){
    cout << "Alice\n";
    return;
}


void solve(){
    int n; cin >> n;
    string str; cin >> str;
    char first = str[0];
    char last = str[n-1];
    int countA = 0;
    int countB = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == 'A') ++countA;
        else ++countB;
    }


    if(first == last){
        if(first == 'A'){
            alice();
            return;
        }
        else{
            bob();
            return;
        }
        
    }
    if(n==2){
        if(str[0] == 'A'){
            alice();
            return;
        }
        else{
            bob();
            return;
        }    
        
    }

    if(first == 'A'){
        if(countB == 1){
            alice();
            return;
        }
        else{
            bob();
            return;
        }
    }

    if(first == 'B'){
        if(countA ==1){
            bob();
            return;
        }
        else{
            char sl = str[n-2];
            if(sl == 'B'){
                bob();
                return;
            }
            else{
                alice();
                return;
            }
           
        }
    }

    cout << "OK\n";




}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--){
        solve();
    }
}