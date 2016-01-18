#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> a;

	for (int i=0; i<3;i++) {
		int v;
		scanf("%d", &v);
		a.push_back(v);
	}
	sort(a.begin(), a.end());

	printf("%d ", a[1]);
}
