#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;


int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int v, e;
		scanf("%d %d", &v, &e);
		vector<int> a[v + 1];
		bool check[v + 1];
		int group[v + 1];

		for (int i=1; i<=v; i++) {
			check[i] = false;
			group[i] = 0;
		}

		for (int i=0; i < e; i++) {
			int sp, ep;
			scanf("%d %d", &sp, &ep);
			a[sp].push_back(ep);
			a[ep].push_back(sp);
		}

		for (int i=1;i<=v;i++) {
			queue<int> q;
			if (check[i]) {
				continue;
			};
			if (group[i] == 0) {
				group[i] = 1;
			}
			q.push(i);

			while (!q.empty()) {
				int x = q.front();
				check[i] = true;
				q.pop();
				for (int i=0; i<a[x].size() ; i++) {
					int y = a[x][i];
					if (check[y] == false) {
						check[y] = true;
						group[y] = 3 - group[x];
						q.push(y);
					}
				}
			}
		}

		string ans = "YES";
		for (int i=1;i<=v;i++) {
			for (int j=0;j < a[i].size(); j++) {
				int y = a[i][j];
				if ((group[i] + group[y]) != 3) {
					ans = "NO";
					break;
				}
			}
		}
		printf("%s\n", ans.c_str());
	}
	return 0;
}
