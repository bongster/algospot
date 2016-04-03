#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	float m, n;
	scanf("%f", &m);
	scanf("%f", &n);

	int sm = ceil(sqrt(m));
	int mm = floor(sqrt(n));

	int sum = 0;
	if (sm > mm) {
		printf("%d\n", -1);
		return 0;
	}
	for (int i=sm; i <= mm ; i++) {
		sum +=i * i;
	}
	printf("%d\n%d\n", sum, sm * sm);
	return 0;
}
