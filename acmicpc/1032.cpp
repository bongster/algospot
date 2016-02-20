#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);

	vector<string> a(t);
	for (int i=0; i < t; i++) {
		cin >> a[i];
	}
	vector<char> ans;
	int s_len = a[0].size();
	char d[s_len];
	for (int i=0; i < s_len; i++) {
		d[i] = a[0][i];
		for (int j=1; j < t; j++) {
			if (d[i] != a[j][i]) {
				d[i] = '?';
				break;
			}
		}
	}

	for (int i=0; i< s_len; i++) {
		printf("%c", d[i]);
	}
	printf("\n");

	return 0;
}
