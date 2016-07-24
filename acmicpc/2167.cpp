#include <iostream>
using namespace std;

int solve(int x1, int y1, int x2, int y2);

int a[300][300];

int main() {
	int t, n, m;
	scanf("%d %d", &n, &m);
	
	for (int i=0; i<n;i++) {
		for (int j=0; j<m;j++) {
			scanf("%d", &a[i][j]);
		}
	}

	// for (int i=0; i<n;i++) {
	// 	for (int j=0; j<m;j++) {
	// 		printf("%d ", a[i][j]);
	// 	}
	// 	printf("\n");
	// }
	scanf("%d", &t);
	int x1,y1,x2,y2;
	
	while (t--) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		// printf("%d %d %d %d\n", x1, y1, x2, y2);
		// printf("==========\n");
		int ans = solve(x1, y1, x2, y2);
		printf("%d\n", ans);
		// printf("==========\n");
	}
	return 0;
}

int solve(int x1,int y1,int x2,int y2) {
	int sum = 0;
	for (int i=(x1 - 1); i < x2; i++) {
		for (int j = (y1 - 1); j < y2; j++) {
			sum += a[i][j];
			// printf("%d %d %d\n", i + 1,j + 1, a[i][j]);
		}
	}
	return sum;
}