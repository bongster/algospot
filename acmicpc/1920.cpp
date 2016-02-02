#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int n,m;
	scanf("%d", &n);
	vector<int> a;
	for (int i=0;i<n;i++) {
		int v;
		scanf("%d", &v);
		a.push_back(v);
	}
	sort(a.begin(), a.end());

	scanf("%d", &m);
	for (int i=0;i<m;i++) {
		int v;
		scanf("%d", &v);
		int l=0, r=n;
		bool ans = false;
		while (l <= r) {
			int mid = (l+r) / 2;
			if (a[mid] < v) {
				l = mid+1;
			} else if (a[mid] > v) {
				r = mid-1;
			} else {
				ans = true;
				break;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
