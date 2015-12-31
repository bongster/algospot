#include <iostream>
#include <vector>

using namespace std;

long long getY(long long &a, long long &gcd_value, long long &gcf_value) {
	return gcf_value / (a / gcd_value);
}
int main() {
	long long n, m, length, ans[2] = {100000000, 100000000};
	scanf("%lld %lld", &n, &m);
	length = m / n - 1;

	long long x=0, y=0;
	for (long long i=1; i < length; i++) {
		x = n * i;
		y = getY(x, n, m);
		if (x + y < ans[0] + ans[1]) {
			ans[0] = x;
			ans[1] = y;
		}
	}

	printf("%lld %lld\n", ans[0], ans[1]);
	return 0;
}
