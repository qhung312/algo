#include <bits/stdc++.h>
using namespace std;
template<class T> ostream& operator<<(ostream &os, const vector<T> &v) { os << "{"; bool f = true; for (int i = 0; i < v.size(); i++) { if (!f) os << ", "; else f = false; os << v[i]; } return os << "}"; }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> p) { return os << "(" << p.first << ", " << p.second << ")"; }
string change_bit(int n, int base) { string s = ""; while (n > 0) { s += char(n % base) + '0'; n /= base; } reverse(s.begin(), s.end()); return s; }
#define rep(i,a,n) for (int i=a;i<int(n);i++)
#define per(i,a,n) for (int i=int(n)-1;i>=0;i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define SZ(x) ((int)(x).size())
#define dbg(x) #x << ": " << x << " "
typedef long long ll;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef vector<int> vi;
typedef pair<ll,ll> pl;
typedef vector<ll> vl;
typedef vector<pl> vpl;
typedef long double ld;
typedef pair<double,double> pd;
typedef vector<double> vd;
typedef vector<pd> vpd;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(0);
	return 0;
}
