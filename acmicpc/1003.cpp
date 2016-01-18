#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int d[41][2];
int main() {
	int t;
	d[0][1] = d[1][0] = 0;
	d[0][0] = d[1][1] = 1;

	for(int i=2; i < 41;i++) {
		d[i][0] = d[i-1][0] + d[i-2][0];
		d[i][1] = d[i-1][1] + d[i-2][1];
	}
	scanf("%d", &t);
	while (t--) {
		int i;
		scanf("%d", &i);
		printf("%d %d\n", d[i][0], d[i][1]);
	}
}
