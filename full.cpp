#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
template<class T> ostream& operator<<(ostream &os, const vector<T> &v) { os << "{"; bool f = true; for (int i = 0; i < v.size(); i++) { if (!f) os << ", "; else f = false; os << v[i]; } return os << "}"; }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> p) { return os << "(" << p.first << ", " << p.second << ")"; }
string change_bit(int n, int base) { string s = ""; while (n > 0) { s += char(n % base) + '0'; n /= base; } reverse(s.begin(), s.end()); return s; }
#define dbg(x) #x << ": " << (x) << " "

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	return 0;
}
