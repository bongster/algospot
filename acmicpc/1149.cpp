#include <iostream>
#include <vector>
#include <algorithm>

#define min3(a,b,c) min(min(a, b), c) 
using namespace std;

int a[1001][3];
int d[1001][3];
int main() {
	int t;
	scanf("%d", &t);
	for (int i=1; i<= t; i++) {
		for(int j=0; j<3; j++) {
			int v;
			scanf("%d", &v);
			a[i][j] = v;
			d[i][j] = v;
		}
	}
	for (int i=2; i<=t;i++) {
		d[i][0] = min(d[i-1][1], d[i-1][2]) + a[i][0];
		d[i][1] = min(d[i-1][0], d[i-1][2]) + a[i][1];
		d[i][2] = min(d[i-1][1], d[i-1][0]) + a[i][2];
	}
	printf("%d\n", min3(d[t][0], d[t][1], d[t][2]));
}
