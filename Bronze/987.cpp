#include <cstdio>
#include <iostream>

using namespace std;

void setIO(string s) {
	(void) freopen((s + ".in").c_str(), "r", stdin);
	(void) freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    setIO("word");
    int N, K;
    cin >> N >> K;

    int curr_len = 0, word_len;
    string curr_word;
        
    for (int i = 0; i < N; i++) {
        cin >> curr_word;
        word_len = curr_word.size();
        curr_len += word_len;
        if (i == 0) {
            cout << curr_word;
        } else if (curr_len <= K) {
            cout << " " + curr_word;
        } else {
            cout << "\n" + curr_word;
            curr_len = word_len;
        }
    }
    return 0;
}