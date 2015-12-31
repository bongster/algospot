#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	vector<int> a;
	vector<int> d;

	for(int i=0; i< t;i++) {
		int v;
		scanf("%d", &v);
		a.push_back(v);
	}
	long long sum;
	for (int i=0; i< t;i++) {
		sum += a[i];
	}

	int average = sum / t;
	int rem = sum % t;

	for (int i=0; i<t-rem;i++) {
		d.push_back(average);
	}

	for (int i=0; i<rem;i++) {
		d.push_back(average +1);
	}

	int ans = 0;
	for (int i= 0; i< t;i++) {
		if(a[i] < d[i]) {
			ans += d[i] - a[i];
		}
	}
	printf("%d\n", ans);
	return 0;
}
