#include <iostream>
using namespace std;

int getX(int num);
int getY(int num, int x);
pair<int, int> getXY(int num, int x, int y);

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int num1, num2, x1,y1, x2, y2;
		pair<int, int> p1, p2;
		scanf("%d %d", &num1, &num2);
		x1 = getX(num1);
		y1 = getY(num1, x1);
		x2 = getX(num2);
		y2 = getY(num2, x2);
		p1 = getXY(num1, x1, y1);
		p2 = getXY(num2, x2, y2);
		printf("%d %d, (%d %d), (%d %d)\n", x1, x2, p1.first, p1.second, p2.first, p2.second);
	}
	return 0;
}

bool check(int num, int mid) {
	return (mid * (mid + 1)) / 2 >= num;
}

int getX(int num) {
	int l = 1, r = 10000, mid, ans = r;
	while (l <= r) {
		mid = (l + r) / 2;
		if (check(num, mid)) {
			r = mid - 1;
			ans = min(ans, mid);
		} else {
			l = mid + 1;
		}
	}
	return ans;
}

int getY(int num, int x) {
	int start = (x * (x - 1)) / 2 + 1;
	return num - start + 1;
}

pair<int, int> getXY(int num, int x, int y) {
	int start = (x * (x - 1)) / 2 + 1;
	return make_pair(num - start + 1, x - (num - start));
}
