#include <iostream>
#include <queue>
using namespace std;

int main() {
	int m,n;
	scanf("%d %d", &m, &n);
	queue<long long> a1;
	queue<long long> a2;
	for(int i=0;i<m;i++) {
		long long v;
		scanf("%lld", &v);
		a1.push(v);
	}
	for(int i=0;i<n;i++) {
		long long v;
		scanf("%lld", &v);
		a2.push(v);
	}

	while (!(a1.empty() && a2.empty())) {
		if (a1.empty()) {
			long long v = a2.front();
			printf("%lld ", v);
			a2.pop();
		}else if (a2.empty()) {
			long long v = a1.front();
			printf("%lld ", v);
			a1.pop();
		} else {
			long long v1 = a1.front();
			long long v2 = a2.front();
			if (v1 > v2) {
				printf("%lld ", v2);
				a2.pop();
			} else if (v1 < v2) {
				printf("%lld ", v1);
				a1.pop();
			} else {
				printf("%lld %lld ", v1, v2);
				a1.pop(); a2.pop();
			}
		}
	}
	return 0;
}
