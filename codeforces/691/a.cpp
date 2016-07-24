#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	vector<int> a;
	bool is_fastened = true;
	int count_zero = 0;
	if (t == 1) {
		int v;
		scanf("%d", &v);
		is_fastened = v == 1;
		printf("%s\n", is_fastened ? "YES": "NO");
	} else {
		for(int i=0;i<t;i++) {
			int v;
			scanf("%d", &v);
			if (!v) {
				count_zero +=1;
				if (count_zero > 1) {
					is_fastened = false;
					break;
				}
			}
		}
		printf("%s\n", is_fastened ? (count_zero == 0 ? "NO": "YES"): "NO");
	}

	return 0;
}
