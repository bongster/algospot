#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	string test;
	scanf("%d", &t);
	while (t--) {
		int p;
		long long i;
		string name;
		long long ans = 0;
		string ans_name;
		scanf("%d", &p);
		while (p--) {
			scanf("%lld", &i);
			cin >> name;
			if (ans < i) {
				ans = i;
				ans_name = name;
			}
		}
		printf("%s\n", ans_name.c_str());
	}
	return 0;
}
