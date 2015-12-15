#include <iostream>
using namespace std;


int main() {

	int t, n;
	scanf("%d", &t);
	int d[t+1], v[t+1];

	for (int i=1; i <= t; i++) {
		scanf("%d", &n);
		v[i] = d[i] = n;
	}
	d[0] = 0;

	for (int i=2; i <= t; i++) {
		for (int j=1; j<i; j++) {
			d[i] = max(d[i], d[i - j] + v[j]);
		}
	}
	printf("%d\n", d[t]);
	return 0;
}
