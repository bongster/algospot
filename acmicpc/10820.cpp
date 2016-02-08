#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string s;
    while (getline(cin, s)) {
        int a[4] = {0};
        for (int i=0; i<s.size(); i++) {
            int v = int(s[i]);
            if (v >=65 && v <=90) {
                // 대문자
                a[1] += 1;
            }else if (v >=97 && v <=122) {
                // 소문자
                a[0] += 1;
            }else if (v >= 48 && v <= 57) {
                // 숫자
                a[2] += 1;
            }else if (v == 32) {
                // 공백
                a[3] += 1;
            }
        }
        printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
    }
    
    return 0;
}