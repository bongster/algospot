#include <iostream>
#include <string>

using namespace std;

int main() {
	int a[26];
	for (int i=0;i<26;i++) {
		a[i] = -1;
	}
	string s;
	cin >> s;
	for (int i=0; i< s.size(); i++) {
		if (a[int(s[i]) - 97] == -1) {
			a[int(s[i]) - 97] = i;
		}
	}
	for (int i=0; i< 26;i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
