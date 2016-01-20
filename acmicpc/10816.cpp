#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int idx[20000001] = {0};

int main() {
	vector<long long> a;
	int n,m, count=0;
	scanf("%d", &n);
	for (int i=0; i< n;i++) {
		long long v;
		scanf("%lld", &v);
		idx[v + 10000000] += 1;
		if (idx[v + 10000000] == 1) {
			count++;
			a.push_back(v);
		}
	}
	sort(a.begin(), a.end());

	scanf("%d", &m);

	for (int i=0; i< m;i++) {
		long long v;
		scanf("%lld", &v);
		int l=0,r = count - 1, mid, check = 0;
		while (l <= r) {
			mid = (l + r) / 2;

			if(a[mid] < v) {
				l = mid + 1;
			}else if (a[mid] > v) {
				r = mid -1;
			} else {
				check = idx[v + 10000000];
				break;
			}
		}
		printf("%d ", check);
	}

	return 0;
}
