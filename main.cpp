#pragma warning(disable:4996)
#ifdef _DEBUG
#define gets(SS) gets_s(SS, RSIZE_MAX)
#endif
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <ctime>
#include <deque>
#include <string>
#include <fstream>
#include <cassert>
#include <bitset>
#include <regex>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>
#include <functional>

using namespace std;

template<typename T1, typename T2>
struct Pair {
    T1 x;
    T2 y;
    Pair() : x(0), y(0) {}
    Pair(T1 x, T2 y)
            : x(x), y(y) {}
};

//std::sort(pos.begin(), pos.end(), [](const Pair& a, const Pair& b) {
//return a.y < b.y;
//});

void sol() {

}

int main() {
//#pragma comment(linker, "/STACK:536870912")
#ifdef _DEBUG
    if (!freopen("input.txt", "r", stdin)) {
        cerr << "input.txt File not found\n";
    }
    if (!freopen("output.txt", "w", stdout)) {
        cerr << "File not found\n";
    }
#else
    //freopen("crossover.in", "r", stdin);
    //freopen("crossover.out", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(12);
//    int t;
//    cin >> t;
//    for (int i = 0; i < t; ++i) {
//        sol();
//    }
    sol();
}