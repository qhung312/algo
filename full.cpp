#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (int i = a; i < int(b); i++)
#define per(i,a,b) for (int i = int(b)-1; i >= a; i--)
#define trav(a, x) for (auto &a : x)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define SZ(x) (int)(x).size()
#define dbg(x) #x << ": " << x << " "
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep; for (const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
template<typename T, size_t size> ostream& operator<<(ostream &os, const array<T, size> &arr) { os << '{'; string sep; for (const auto &x : arr) os << sep << x, sep = ", "; return os << '}'; }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	return 0;
}
