#include <cstdio>
#include <iostream>

using namespace std;

void setIO(string s) {
	(void) freopen((s + ".in").c_str(), "r", stdin);
	(void) freopen((s + ".out").c_str(), "w", stdout);
}

int teleport(int& a, int& b, int& x, int& y) {
    return min(min(abs(b-a),abs(x-a)+abs(b-y)),abs(y-a)+abs(b-x));
}

int main() {
    setIO("teleport");
    int a, b, x, y;
    (void) scanf("%d %d %d %d", &a, &b, &x, &y);
    printf("%d", teleport(a,b,x,y));
    return 0;
}