#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long a[100001];

bool check(long long time, int &n, long long &m) {
    // time에서 만들수 있는 최대 값이 m 보다 크면
    long long count=0;
    for (int i=1; i<= n; i++) {
        count = count + (time / a[i]);
    }
    return count < m;
}
int main() {
    int n;
    long long m;
    scanf("%d %lld", &n, &m);
    
    long long mx_time=0;
    long long mn_time=1000000000;
    for (int i=1; i<=n; i++) {
        scanf("%lld", &a[i]);
        mx_time = max(mx_time, a[i]);
        mn_time = min(mn_time, a[i]);
    }
    long long l = (mn_time * m) / n, r = (mx_time * m) / n;
    long long ans = r;
    while (l <= r) {
        long long mid = (l + r) / 2;
        if (check(mid, n, m)) {
            l = mid + 1;
        } else {
            r = mid - 1;
            ans = min(ans, mid);
        }
    }
    printf("%lld\n", ans);
    return 0;
}