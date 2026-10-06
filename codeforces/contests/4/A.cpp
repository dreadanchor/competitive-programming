#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	int w;

	cin >> w;

	if(w >= 4 && w % 2 == 0){
		cout << "YES" << "\n";
	}
	else{
		cout << "NO" << "\n";
	}    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
