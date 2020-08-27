#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	for(int i = 0; i < (int) s.size(); i += 2) {
		cout << s[i];	
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for (int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
