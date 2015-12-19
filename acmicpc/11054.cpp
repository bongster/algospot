#include <iostream>
using namespace std;


int main() {
	int t;
	scanf("%d", &t);
	int a[t];
	int d[t];
	int d2[t];

	for (int i=0; i<t;i++) {
		scanf("%d", &a[i]);
	}

	// 최대 증가 수열
	for (int i=0; i < t; i++) {
		d[i] = 1;
		for (int j=0; j< i;j++) {
			if (a[j] < a[i] && d[i] < d[j] + 1) {
				d[i] = d[j] + 1;
			}
		}
	}

	// 최대 감소 수열
	for (int i=t-1; i>=0; i--) {
		d2[i] = 1;
		for (int j=i+1; j<t; j++) {
			if (a[i] > a[j] && d2[j]+1 > d2[i]) {
				d2[i] = d2[j]+1;
			}
		}
	}
	int result = 0;
	for (int i=0; i< t; i++){
		result = max(result, d[i] + d2[i] -1);
	}

	printf("%d\n", result);
	return 0;
}
