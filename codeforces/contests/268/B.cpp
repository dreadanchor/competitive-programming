#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int presses(int buttons){
	int sum = 0;
	
	for(int i = 1; i <= buttons; i++){
		int layer;
		// Garante que na primeira repetição, a camada anterior é 1
		if(i == 1){
			layer = 1;
		}
		else{
			layer = i - 1;
		}

		sum += ((buttons - i) * layer) + layer;
	}

	return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int btns;

    cin >> btns;

    cout << presses(btns) << "\n";

    return 0;
}
