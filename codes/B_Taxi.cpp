// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n; cin >> n;
	vector<int> v(n);
	for(auto &i: v) cin >> i;
	map<int, int, greater<int>> mp;
	for(auto it: v){
		mp[it]++;
	}
	int ans = 0;
	int four = 0, three = 0, two = 0, one = 0;
	for(auto it: mp){
		if(it.first == 4)		four = it.second;
		else if(it.first == 3)		three = it.second;
		else if(it.first == 2)		two = it.second;
		else		one = it.second;
	}

	ans+=four;

	ans+=three;
	one-=three;

    ans+=(two/2);
    if(two&1){
        ans+=1;
        one-=2;
    }

    if(one > 0){
        ans+=(ceil(one/4.00));
    }

    cout << ans << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}