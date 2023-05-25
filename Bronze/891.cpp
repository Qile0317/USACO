#include <bits/stdc++.h>
using namespace std;

// data structure macros
#define ll long long
#define str string
#define vi vector<int>

// operation macros
#define all(x) (x).begin(), (x).end()
#define For(x, y) for (int x = 0; x < y; x++)
#define mp(x, y) make_pair(x, y)
#define len(x) (int)x.size()
#define fi first
#define se second
#define pb push_back

// file IO function
void setIO(string s) {
	(void) freopen((s + ".in").c_str(), "r", stdin);
	(void) freopen((s + ".out").c_str(), "w", stdout);
}

class Turn {
    public:
    pair<int, int> ab;
    int g;

    Turn(int av, int bv, int gv) {
        ab = mp(av-1,bv-1);
        g = gv-1;
    }
};

int score(vector<Turn> arr, int& N, int startpeb) {
    vi game = {0, 0, 0};
    game[startpeb] = 1;
    int sc = 0;

    For(i, N) {
        Turn t = arr[i];
        swap(game[t.ab.fi], game[t.ab.se]);
        if (game[t.g] == 1) {
            sc++;
        }
    }
    return sc;
}

int shell(vector<Turn> arr, int& N) {
    int maxs = -1;
    For (i, N) {
        maxs = max(maxs, score(arr, N, i));
    }
    return maxs;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    setIO("shell");

    int N; cin >> N;
    vector<Turn> arr;
    For(i, N) {
        int a,b,g;
        cin >> a >> b >> g;
        arr.pb(Turn(a,b,g));
    }

    cout << shell(arr, N);

    return 0;
}

// g++ -std=c++17 -O2 name.cpp -o name -Wall -Wextra -Wshadow -Wconversion -Wfloat-equal -Wduplicated-cond -Wlogical-op