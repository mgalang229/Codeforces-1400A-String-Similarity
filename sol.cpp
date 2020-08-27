#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		for (int i = 0; i < (int) s.size(); i += 2) {
			cout << s[i];
		}
		cout << '\n';
	}
	return 0;
}
