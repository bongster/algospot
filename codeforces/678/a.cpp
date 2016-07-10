#include <iostream>
using namespace std;

int MAX = 1000000000;
int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i=n; i <= MAX; i ++) {
		if (i % k == 0) {
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}
