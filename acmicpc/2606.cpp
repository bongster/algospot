#include <iostream>
#include <vector>
using namespace std;
int d[100][100];
int main() {
	int n,m;
	cin >> n;
	cin >> m;
	for (int i=0; i<m; i++) {
		for (int j=0; j<m; j++) {
			int u,v;
			scanf("%d %d", &u, &v);
			d[u-1][v-1] = d[v-1][u-1] = 1;
		}
	}
	for (int k=0; k<n; k++) {
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				if (d[i][k] == 1 && d[k][j] == 1) {
					d[i][j] = 1;
				}
			}
		}
	}
	int ans = 0;

	for (int i=1; i<n; i++) {
		ans += d[0][i];;
	}

	printf("%d\n", ans);
	return 0;
}
