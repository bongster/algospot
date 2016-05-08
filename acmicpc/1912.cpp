#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	vector<long long> a = vector<long long>(t);
	vector<long long> d = vector<long long>(t);

	for (int i=0; i< t;i++) {
		scanf("%lld", &a[i]);
	}

	d[0] = a[0];

	for (int i=1; i< t; i++) {
		d[i] = max(d[i - 1] + a[i], a[i]);
	}

	long long ans = d[0];
	for (int i=0; i< t; i++) {
		ans = max(ans, d[i]);
	}

	printf("%lld\n", ans);

	return 0;
}
