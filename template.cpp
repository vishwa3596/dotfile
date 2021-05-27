// 3 years challenge become master.
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define f first
#define s second
#define nl "\n";
#define vi vector<int>
#define pi pair<int,int>
#define vpi vector<pair<int,int>>
#define r(i,a,b) for(int i=a;i<b;i++)
#define d(i, a) for(int i=a;i>=0;i--)
#define D(i, a, b) for(int i=a;i>=b;i--)
#define A(u, thing) for(auto u: thing)
using namespace std;
const int MOD = 1e9+7;
const int inf = 1e18+7; // check this values dummy.
const int N = 3e5+5;
vi g[N]; // making graph

void setIO(string s) { // the argument is the filename without the extension
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}
/**
 *
 *      things i forget.
 *      a/b mod m = a.b(inverse) mod m where b(inverse) is b^(m-2) mod m;
 *
 * */
struct mi {
 	int v; explicit operator int() const { return v; } 
	mi() { v = 0; }
	mi(int _v):v(_v%MOD) { v += (v<0)*MOD; }
};
mi& operator+=(mi& a, mi b) { 
	if ((a.v += b.v) >= MOD) a.v -= MOD; 
	return a; }
mi& operator-=(mi& a, mi b) { 
	if ((a.v -= b.v) < 0) a.v += MOD; 
	return a; }
mi operator+(mi a, mi b) { return a += b; }
mi operator-(mi a, mi b) { return a -= b; }
mi operator*(mi a, mi b) { return mi((int)a.v*b.v); }
mi& operator*=(mi& a, mi b) { return a = a*b; }
mi pow(mi a, int p) { assert(p >= 0); // asserts are important! 
	return p==0?1:pow(a*a,p/2)*(p&1?a:1); }
mi inv(mi a) { assert(a.v != 0); return pow(a,MOD-2); }
mi operator/(mi a, mi b) { return a*inv(b); }

template<typename T_vector>
void output_vector(const T_vector &v, bool add_one = false, int start = -1, int end = -1) {
    if (start < 0) start = 0;
    if (end < 0) end = v.size();

    for (int i = start; i < end; i++)
        cout << v[i] + (add_one ? 1 : 0) << (i < end - 1 ? ' ' : '\n');
}

void solve_test_case(){

}

signed main(){
	// uncomment in usaco
	//setIO("problemname");
	int t;
	cin >> t;
	//uncomment if no test cases.
	//t = 1;
	r(i, 1, t+1){
		// cout << "Case #" << t <<  ": " <<  nl;
		solve_test_case();
	}
	return 0;
}
