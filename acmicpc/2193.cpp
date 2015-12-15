#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
	using namespace std;

	int t;
	scanf("%d", &t);
	long long d[t][2];

	d[1][0] = 0;
	d[1][1] = 1;

	d[2][0] = 1;
	d[2][1] = 0;

	for (long long i=3; i<=t;i++) {
		d[i][0] = d[i-1][0] + d[i-1][1];
		d[i][1] = d[i-2][0] + d[i-2][1];
	}

	printf("%llu\n", d[t][0] + d[t][1]);
	return 0;
}

