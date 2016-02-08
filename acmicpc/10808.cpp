#include <iostream>
#include <string>

using namespace std;

int main() {
	int a[26] = {0};
	string s;
	cin >> s;
	for (int i=0; i< s.size(); i++) {
		a[int(s[i]) - 97] += 1;
	}
	for (int i=0; i< 26;i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
