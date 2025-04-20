// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 

vector<pair<int, int>> hardle;
vector<pair<int, int>> power;

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        int n, m, l; cin >> n >> m >> l;
        priority_queue<int> powerQ;
        hardle.clear();
        power.clear();

        int x, y;
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            hardle.push_back(make_pair(x, (y-x+2)));
        }

        for(int i = 0; i < m; i++){
            cin >> x >> y;
            power.push_back(make_pair(x, y));
        }

        int k = 1, pIndex = 0;
        int count = 0;
        int szz = hardle.size();
        for(int i = 0; i < szz; i++){
            while(power[pIndex].first < hardle[i].first && pIndex < m){
                powerQ.push(power[pIndex].second);
                pIndex++;
            }
            while(k < hardle[i].second and !powerQ.empty()){
                k+=powerQ.top();
                powerQ.pop();
                count++;
            }
            if(k < hardle[i].second){
                cout << -1 << '\n';
                goto next;
            }
        }
        cout << count << '\n';
        next:;
    }
}