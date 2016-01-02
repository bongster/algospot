#include <iostream>
#include <vector>

using namespace std;

bool cache[100000001] = {false};

long long getY(long long &a, long long &gcd_value, long long &gcf_value) {
	return gcf_value / (a / gcd_value);
}

int main() {
	long long n, m, length, ans[2] = {100000000, 100000000};
	scanf("%lld %lld", &n, &m);
	length = m / n;

	long long x=0, y=0;
	for (long long i=1; i < length; i++) {
		x = n * i;
		if (cache[x]) {
			continue;
		}
		y = getY(x, n, m);
		if (x + y < ans[0] + ans[1]) {
			ans[0] = min(x, y);
			ans[1] = max(x, y);
		}
		cache[x] = cache[y] = true;
	}

	printf("%lld %lld\n", ans[0], ans[1]);
	return 0;
}
