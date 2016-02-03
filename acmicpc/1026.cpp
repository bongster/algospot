#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	int b[n];

	for (int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}

	for (int i=0;i<n;i++) {
		scanf("%d", &b[i]);
	}
	sort(a, a + n);
	sort(b, b + n);
	reverse(b, b + n);

	int sum = 0;
	for (int i=0;i<n;i++) {
		sum += a[i] *  b[i];
	}
	printf("%d\n", sum);
	return 0;
}
