#include <iostream>
using namespace std;

int a[100001];
int s[100001];
int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	for (int i=1; i<=n;i++) {
		scanf("%d", &a[i]);
		s[i] = s[i-1] + a[i];
	}

	while (m--) {
		int sv,ev;
		scanf("%d %d", &sv, &ev);
		printf("%d\n", s[ev] - s[sv -1]);
	}
	return 0;
}
