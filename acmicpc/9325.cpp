#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int s, n;
		scanf("%d", &s);
		scanf("%d", &n);
		for (int i=0; i< n;i++) {
			int c, p;
			scanf("%d %d", &c, &p);
			s += c * p;
		}
		printf("%d\n", s);
	}
	return 0;
}
