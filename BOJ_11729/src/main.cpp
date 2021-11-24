#include <iostream>

using namespace std;

void solve(int N, int s, int e) {
    if (1 == N) {
        cout << s << ' ' << e << '\n';
        return;
    }

    auto other = 6 - s - e;

    solve(N - 1, s, other);
    cout << s << ' ' << e << '\n';
    solve(N - 1, other, e);
}

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    cin >> N;

    int K{ 1 };
    for (int i = 0; i < N; ++i)
    {
        K *= 2;
    }
    K -= 1;

    cout << K << '\n';
    solve(N, 1, 3);

    return 0;
}