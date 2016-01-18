#include <iostream>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	if ((n / 10) >= 9) {
		printf("A\n");
	} else if ((n / 10) >= 8) {
		printf("B\n");
	} else if ((n / 10) >= 7) {
		printf("C\n");
	} else if ((n / 10) >= 6) {
		printf("D\n");
	} else {
		printf("F\n");
	}
}
