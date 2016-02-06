#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	vector<int> a[n + 1];
	int d[n+1][n+1];

	for (int i=1;i<=n;i++) {
		for (int j=1; j<=n;j++) {
			if (i == j) {
				d[i][j] = 0;
			} else {
				d[i][j] = n -1;
			}
		}
	}

	for(int i=1; i<=n; i++) {
		int v, e;
		scanf("%d %d", &v, &e);
		a[v].push_back(e);
		a[e].push_back(v);
	}

	for (int j=1; j<=n; j++) {
		queue<int> q;
		bool check[n + 1] = {false};
		vector<int> order;
		check[j] = true;
		q.push(j);
		while (!q.empty()) {
			int x = q.front();
			q.pop();
			order.push_back(x);
			for (int i=0;i<a[x].size();i++) {
				int y = a[x][i];
				if (!check[y]) {
					check[y]= true;
					q.push(y);
				}
			}
		}
		int start = order[0];
		for (int i=1; i<order.size(); i++) {
			int v = order[i];
			d[start][v] = d[v][start] = min(min(d[start][v], i), min(d[v][start], i));
			printf("%d %d %d %d \n", start, v, d[start][v], d[v][start]);
		}
		printf("[%d]\n", start);
		for (int i=1;i<=n;i++) {
			for (int j=1;j<=n;j++) {
				printf("%d ", d[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
