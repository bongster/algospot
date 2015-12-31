#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool check (long long &n, long long &m, vector<long long> &a) {
	int length = a.size();
	long long sum = 0;
	for (int i=0; i < length; i++) {
		if (a[i] > n) {
			sum += a[i] - n;
		}
	}
	return m <= sum;
}
int main() {
	long long n,m, l= 2000000000, r=0;
	scanf("%lld %lld", &n, &m);
	vector<long long> a(n);

	for (int i=0; i< n; i++) {
		scanf("%lld", &a[i]);
		r = max(r, a[i]);
		l = min(l, a[i]);
	}
	long long ans = 0;
	while (l <= r) {
		long long mid = (l + r) / 2;
		if (check(mid, m, a)) {
			ans = max(ans, mid);
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	printf("%lld\n", ans);

	return 0;
}
