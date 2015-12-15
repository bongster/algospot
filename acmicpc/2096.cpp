#include <iostream>
using namespace std;
#define MAX_VALUE 9000000

int main() {
	int t;
	int a[3];
	int d_max[3];
	int temp[3];
	int d_min[3];
	int r_max=0, r_min = MAX_VALUE;

	scanf("%d", &t);
	for (int i= 0; i < t; i++) {
		for (int j=0; j < 3; j++) {
			scanf("%d", &a[j]);
		}
		if (i == 0) {
			d_max[0] = d_min[0] = a[0];
			d_max[1] = d_min[1] = a[1];
			d_max[2] = d_min[2] = a[2];
		} else {
			temp[0] = max(d_max[0], d_max[1]) + a[0];
			temp[1] = max(max(d_max[0], d_max[1]), d_max[2]) + a[1];
			temp[2] = max(d_max[1], d_max[2]) + a[2];

			d_max[0] = temp[0];
			d_max[1] = temp[1];
			d_max[2] = temp[2];

			temp[0] = min(d_min[0], d_min[1]) + a[0];
			temp[1] = min(min(d_min[0], d_min[1]), d_min[2]) + a[1];
			temp[2] = min(d_min[1], d_min[2]) + a[2];

			d_min[0] = temp[0];
			d_min[1] = temp[1];
			d_min[2] = temp[2];

		}

		r_max = max(max(d_max[0], d_max[1]), d_max[2]);
		r_min = min(min(d_min[0], d_min[1]), d_min[2]);
	}
	printf("%d %d\n", r_max, r_min);
	return 0;
}
