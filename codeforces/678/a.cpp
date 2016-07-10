#include <iostream>
using namespace std;

int MAX = 1000000000;
int main() {
	int n, k, ans;
	scanf("%d %d", &n, &k);
	if (k == 1) {
		printf("%d", n +1);
	} else {
		for (int i=1; i <= MAX; i++) {
			ans = k * i;
			if (n < ans) {
				printf("%d\n", ans);
				break;
			}
		}
	}
	return 0;
}
