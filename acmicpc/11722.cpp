#include <iostream>
using namespace std;


int main() {
	int t;
	scanf("%d", &t);
	int a[t];
	int d[t];

	for (int i=0; i<t;i++) {
		scanf("%d", &a[t-i -1]);
	}
	int result = 0;
	for (int i=0; i < t; i++) {
		d[i] = 1;
		for (int j=0; j< i;j++) {
			if (a[j] < a[i] && d[i] < d[j] + 1) {
				d[i] = d[j] + 1;
			}
		}
		result = max(result, d[i]);
	}
	printf("%d\n", result);
	return 0;
}
