#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int at, t,n;
    scanf("%d", &t);
    at = t;
    while (t--) {
        scanf("%d", &n);
        vector<int> a[n + 1];
        vector<int> b[n + 1];
        for (int i=1; i< n+1; i++) {
            int bbf;
            scanf("%d", &bbf);
            a[i].push_back(bbf);
            b[bbf].push_back(i);
        }
        int ans=0;
        for (int i=1; i< n+1;i++) {
            int aans = 0;
            
            bool c[n + 1];
            for (int j=0;j< n+1;j++) {
                c[j] = false;
            }
            queue<int> q;
            
            q.push(i);
            
            while(!q.empty()) {
                int p = q.front();
                printf("%d ", p);
                q.pop();
                if (c[p]) {
                    continue;
                }
                c[p] = true;
                aans++;
                for (int i=0; i < a[p].size(); i++) {
                    if (!c[a[p][i]]) {
                        q.push(a[p][i]);
                    }
                }
                
            }
            printf("\n");
            
            ans = max(ans, aans);
        }
        printf("Case #%d: %d\n", at- t, ans);
    }
    return 0;
}