#include <iostream>
#include <queue>
using namespace std;

int main() {
  int f, s, g, u, d;
  scanf("%d %d %d %d %d", &f, &s, &g, &u, &d);
  
  int ans = -1;
  queue<pair<int, int>> q;
  q.push(make_pair(s, 0));
  
  if (s < g && u == 0) {
    printf("use the stairs\n");
    return 0;
  } else if (s > g && d == 0) {
    printf("use the stairs\n");
    return 0;
  }
  
  while (!q.empty()) {
    pair<int, int> x = q.front();
    
    if (x.first == g) {
      ans = x.second;
      break;
    }
    q.pop();

    if (x.first + u <= f) {
      q.push(make_pair(x.first + u, x.second + 1));
    }
    if (x.first -d > 0) {
      q.push(make_pair(x.first - d, x.second + 1));
    }
    
  }
  
  if (ans == -1) {
    printf("use the stairs\n");
  } else {
    printf("%d\n", ans);
  }
  
  return 0;
}
