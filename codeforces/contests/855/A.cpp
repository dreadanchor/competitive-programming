#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	int cases;
	string name;
	unordered_set<string> names;

	cin >> cases;
	
	while(cases--){
		cin >> name;

		if(names.count(name)){
			cout << "YES" << "\n";
		}
		else{
			names.insert(name);
			cout << "NO" << "\n";
		}
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
