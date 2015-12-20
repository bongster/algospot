#include <iostream>
using namespace std;

int main() {
	int E,S,M, e = 1, s = 1, m = 1;
	int max_loop = 15 * 28 * 19;
	scanf("%d %d %d", &E, &S, &M);

	for (int i=1; i<= max_loop; i++ ) {
		if (e == E && s ==S && m == M) {
			printf("%d\n", i);
			break;
		}
		if (e == 15) {
			e = 0;
		}
		if (s == 28) {
			s = 0;
		}
		if (m == 19) {
			m = 0;
		}

		e++;
		s++;
		m++;
	}
	return 0;
}
