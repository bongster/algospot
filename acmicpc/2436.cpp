#include <iostream>
#include <vector>

using namespace std;

long long gcd (long long a, long long b) {
	long long temp;
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

long long gcf (long long a, long long b, long long gcd_value) {
	return ((a / gcd_value) * (b / gcd_value) * gcd_value);
}
bool check(long long &a, long long &b, long long &gcd_value, long long &gcf_value) {
	long long calc_value = gcd(a, b);
	return gcd_value == calc_value && gcf_value == gcf(a, b, calc_value);
}
int main() {
	long long n, m, length, ans[2] = {100000000, 100000000};
	scanf("%lld %lld", &n, &m);
	length = m / n;
	long long a[length];

	for (long long i=0; i<length; i++) {
		a[i] = n * (i + 1);
	}

	for (long long i=0; i<length; i++) {
		for (long long j=i + 1; j < length; j++){
			if (check(a[i], a[j], n, m) && ((a[i]+ a[j]) < (ans[0] + ans[1]))) {
				ans[0] = a[i];
				ans[1] = a[j];
			}
		}
	}

	printf("%lld %lld\n", ans[0], ans[1]);
	return 0;
}
