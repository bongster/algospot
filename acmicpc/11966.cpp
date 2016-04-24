#include <iostream>
using namespace std;

int divideby2(long long a) {
	if (a % 2 == 0) {
		return divideby2(a / 2);
	} else if (a == 1 || a == 2) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	long long n;
	scanf("%lld", &n);
	printf("%d\n", n == 1 ? 1 : divideby2(n));
	return 0;
}
