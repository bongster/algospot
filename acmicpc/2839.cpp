#include <iostream>
using namespace std;

int main() {
	int c = 0;
	scanf("%d", &c);
	int r = 2000;
	
	for (int i=0; i <= c/5; i++) {
		int remain = c - i*5;
		int sum = i;
		if (remain != 0) {
			if (remain % 3 == 0) {
				sum += remain / 3;	
				r = min(r, sum);
			}
		} else {
			r = min(r, sum);
		}
	}
	
	if(r == 2000) {
		r = -1;
	}
	
	printf("%d\n", r);
	
	
	return 0;
}