#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	vector<int> a(n+1);
	vector<int> s(n+1);
	vector<long long> cnt(m, 0);

	cnt[0] = 1;

	for (int i=0; i < n; i++) {
		scanf("%d", &a[i]);
		a[i] %= m;
		if (i == 0) {
			s[i] = a[i];
		}else {
			s[i] = s[i-1] + a[i];
		}
		s[i] %= m;
		cnt[s[i]] +=1;
	}
	long long ans = 0;
	for (int i=0; i<m; i++) {
		ans += (long long)cnt[i] * (long long)(cnt[i]-1) / 2LL;
	}
	printf("%lld\n",ans);

	return 0;
}
