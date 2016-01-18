#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, max_num;
	scanf("%d %d", &n, &max_num);

	for (int i=0; i< n; i++) {
		int v;
		scanf("%d", &v);
		if(v < max_num) {
			printf("%d ", v);
		}
	}
}
