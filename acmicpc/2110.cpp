#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool check (long long &n, long long &m, vector<long long> &a) {
	int length = a.size();
	long long point = a[0];
	int cnt = 1;
	for (int i=1; i < length; i++) {
		if (a[i] >= point + n) {
			point = a[i];
			cnt++;
		}
	}
	return m <= cnt;
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
	sort(a.begin(), a.end());
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
