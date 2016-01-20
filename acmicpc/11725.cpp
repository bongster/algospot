#include <iostream>
#include <vector>

using namespace std;

vector<int> a[100001];

int main() {
	int t;
	scanf("%d", &t);

	for (int i=0; i< t-1; i++) {
		int e, v;
		scanf("%d %d", &e, &v);
		a[e].push_back(v);
		a[v].push_back(e);
	}
	for (int i=1; i <= t;i ++) {
		for (int j=0;j < a[i].size(); j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
