#include <iostream>
#include <map>
using namespace std;

int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	int a[m+1] ={0};

	for(int i=0; i< n;i++) {
		int v;
		scanf("%d", &v);
		a[v] +=1;
	}
	int count=0;
	for(int i=1;i<=m - 1; i++) {
		for(int j=i+1;j <=m;j++){
			if (a[j] != 0) {
				count += a[j] * a[i];
			}
		}
	}
	printf("%d\n", count);
	return 0;
}
