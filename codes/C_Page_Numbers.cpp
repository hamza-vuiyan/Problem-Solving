// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
 

void solve(){
    string str; cin >> str;
    set<int> refined;

    for(int i = 0; i < str.size(); i++){
        string temp = "";
        while (str[i] != ',' and i < str.size())
        {
            temp+=str[i];
            i++;
        }
        int x = stoi(temp);
        
        refined.insert(x);
    }
    vector<int> v(refined.begin(), refined.end());
    
    cout << v[0];
    for(int i = 1; i < v.size(); i++){
        if(v[i]-1 == v[i-1]){
            cout << '-';
            while(v[i]-1 == v[i-1] and i < v.size()){
                i++;
            }
            cout << v[i-1];
            i--;
        } 
        else{
            cout << ',' << v[i];
        }
    }
    cout << '\n';
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
        solve();
}