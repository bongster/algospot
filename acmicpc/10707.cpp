#include <iostream>
using namespace std;

int main() {
	int xa, yb, yc, yd, p;
	scanf("%d", &xa);
	scanf("%d", &yb);
	scanf("%d", &yc);
	scanf("%d", &yd);
	scanf("%d", &p);
	printf("%d", min(xa * p, yc < p ? (p - yc) * yd + yb: yb));
	return 0;
}
