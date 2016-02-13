#include <iostream>
#include <vector>
using namespace std;

vector<int> a[1001];
bool check[1001];
void dfs(int x) {
	check[x] = true;
	for (int i=0; i< a[x].size(); i++) {
		int y = a[x][i];
		if (!check[y]) {
			dfs(y);
		}
	} 
}
int main() {
	int m,n;
	scanf("%d %d", &n,&m);
	for (int i=0;i<m; i++) {
		int e,v;
		scanf("%d %d", &e, &v);
		a[e].push_back(v);
		a[v].push_back(e);
	}
	int ans = 0;
	for (int i=1;i<=n;i++) {
		if (!check[i]) {
			ans++;
			dfs(i);
		}
	}
	printf("%d\n", ans);
	return 0;
}
