#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> a;
	int n,m;
	scanf("%d", &n);
	for (int i=0; i< n;i++) {
		int v;
		scanf("%d", &v);
		a.push_back(v);
	}
	sort(a.begin(), a.end());

	scanf("%d", &m);

	for (int i=0; i< m;i++) {
		int v;
		scanf("%d", &v);
		int l=0,r = n - 1, mid, check = 0;
		while (l <= r) {

			mid = (l + r) / 2;
			if(a[mid] < v) {
				l = mid + 1;
			}else if (a[mid] > v) {
				r = mid -1;
			} else {
				check = 1;
				break;
			}
		}
		printf("%d ", check);
	}

	return 0;
}
