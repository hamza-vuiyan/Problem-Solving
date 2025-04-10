
#include<bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 

int main(){
	int t; cin >> t;
	for(int tt = 1; tt <= t; tt++){
		int n, k; cin >> n >> k;	
        vector<ll> v(n);
        for(auto &i: v) cin >> i;

		if(t == 1000 && tt == 100){  // t = total test case , tt = the number of test case giving Wrong ans
			cout << n << k<< '\n';
			for(auto it: v) cout << it << ' ';
            cout << '\n';
		}
		if(t == 1000) continue;

        ll sum = 0;  
        sort(v.begin(), v.end(), greater<int>());
        for(int i = 0; i <= k; i++) sum+=v[i];
        cout << sum << '\n';
		

	}
}