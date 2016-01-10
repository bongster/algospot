#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> a[32001];
int idn[32001];
int main() {
	int n,m, x, y;
	scanf("%d %d", &n, &m);
	for (int i=0; i<m; i++) {
		scanf("%d %d", &x, &y);
		idn[y] +=1;
		a[x].push_back(y);
	}
	queue<int> q;
	for (int i=1;i<=n;i++) {
		if (idn[i] == 0) {
			q.push(i);
		}
	}
	while (!q.empty()) {
		int x = q.front();
		printf("%d ", x);
		q.pop();
		for (int i=0; i< a[x].size(); i++) {
			int y = a[x][i];
			idn[y] -= 1;
			if (idn[y] == 0) {
				q.push(y);
			}
		}
	}
	printf("\n");
	return 0;
}
