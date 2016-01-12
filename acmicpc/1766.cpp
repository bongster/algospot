#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> a[32001];
int d[32001];
int main() {
	int x,y;
	scanf("%d %d", &x, &y);

	for (int i=0; i < y ; i++) {
		int b,e;
		scanf("%d %d", &b, &e);
		a[b].push_back(e);
		d[e] +=1;
	}

	priority_queue<int> q;
	for (int i=1; i <= x; i++) {
		if (d[i] == 0) {
			q.push(-i);
		}
	}

	for (int i=1; i <= x; i++) {
		int v = -q.top();
		q.pop();
		printf("%d ", v);

		for(int j=0; j < a[v].size(); j++) {
			int y = a[v][j];
			d[y] -= 1;
			if (d[y] == 0) {
				q.push(-y);
			}
		}
	}
	printf("\n");
	return 0;
}
