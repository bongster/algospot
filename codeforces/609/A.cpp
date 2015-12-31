#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	vector<int> a(n);
	for (int i=0; i< n;i++){
		scanf("%d", &a[i]);
	}
	sort(a.rbegin(), a.rend());

	int count = 0;
	for (int i=0; i< n;i++) {
		if (m >= a[i]) {
			count++;
			m -=a[i];
		} else if (m > 0) {
			count++;
			break;
		}
	}
	printf("%d\n", count);
	return 0;
}
