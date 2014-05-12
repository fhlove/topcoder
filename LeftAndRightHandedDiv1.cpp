// BEGIN CUT HERE

// END CUT HERE
#line 5 "LeftAndRightHandedDiv1.cpp"
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <list>
#include <stdexcept>
#include <functional>
#include <utility>
#include <ctime>
using namespace std;

#define PB push_back
#define MP make_pair

#define REP(i,n) for(i=0;i<(n);++i)
#define FOR(i,l,h) for(i=(l);i<=(h);++i)
#define FORD(i,h,l) for(i=(h);i>=(l);--i)

typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<double> VD;
typedef long long LL;
typedef pair<int,int> PII;

const int N=3000;
LL sum[N*2],pos[N*2];
class LeftAndRightHandedDiv1
{
  public:
	int N,M;
int a[1000010];
long s[1000010];
static const long INF = 1ll << 60;


// solve when x = a[center]
long func(int center)
{
    long ans = 0;
    int L = (M - 1) / 2;
    ans += (long)a[center] * L - (long)L * (L+1) / 2;
    if (center >= L) {
        ans -= s[center] - s[center-L];
    } else {
        ans -= s[center];
        ans -= s[M] - s[M - (L - center)] - (L - center) * (long)N;
    }
    int R = M - 1 - L;
    ans -= (long)a[center] * R + (long)R * (R+1) / 2;
    if (center+1+R <= M) {
        ans += s[center+1+R] - s[center+1];
    } else {
        ans += s[M] - s[center+1];
        ans += s[R - (M - (center + 1))] + (R - (M - (center + 1))) * (long)N;
    }
    return ans;
}

long countSwaps(string X, int N) /* assume X is generated from the input Y,A,B,C,D */
{
    this->N = N;
    // save a list of positions that contain a stone.
    for(int i=0; i<N; i++) {
        if (X[i] == 'R') {
            a[M] = i;
            M++;
        }
    }
    // special case, no stones, no need to move.
    if(M == 0) {
        return 0;
    }
    // Cumulative array of the positions that contain the first i stones.
    for(int i=0; i<M; i++) {
        s[i+1] = s[i] + a[i];
    }
    // pick the best result
    long ans = INF;
    for(int i=0; i<M; i++) {
        ans = min(ans, func(i));
    }
    return ans;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "LR"; int Arg1 = 1; int Arg2 = 0; int Arg3 = 1; int Arg4 = 2; int Arg5 = 1; long long Arg6 = 0LL; verify_case(0, Arg6, countSwaps(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5)); }
	void test_case_1() { string Arg0 = "LRLR"; int Arg1 = 1; int Arg2 = 1; int Arg3 = 2; int Arg4 = 3; int Arg5 = 4; long long Arg6 = 0LL; verify_case(1, Arg6, countSwaps(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5)); }
	void test_case_2() { string Arg0 = "LRRLLR"; int Arg1 = 2; int Arg2 = 3; int Arg3 = 4; int Arg4 = 5; int Arg5 = 6; long long Arg6 = 1LL; verify_case(2, Arg6, countSwaps(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5)); }
	void test_case_3() { string Arg0 = "LRRLRLLRLRLRLLRLR"; int Arg1 = 12; int Arg2 = 15; int Arg3 = 3; int Arg4 = 22; int Arg5 = 10; long long Arg6 = 2LL; verify_case(3, Arg6, countSwaps(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5)); }
	void test_case_4() { string Arg0 = "LLLLLLLLL"; int Arg1 = 0; int Arg2 = 1; int Arg3 = 2; int Arg4 = 3; int Arg5 = 1000000; long long Arg6 = 0LL; verify_case(4, Arg6, countSwaps(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5)); }
	void test_case_5() { string Arg0 = "RLRRRLLLRLRLLRLRLLRLRLLLLLRRLRLRLRLRLLRRRLRRLLLLLRRRLRRLRLRRLLLLRLRRLRLRRLRRLRLLRRLRLRRRLRLLRLLLLRLLLLRLLRRLLRRRRLLRLLRLRLRRLL"; int Arg1 = 48658960; int Arg2 = 221863772; int Arg3 = 385355602; int Arg4 = 393787970; int Arg5 = 980265; long long Arg6 = 59619692663LL; verify_case(5, Arg6, countSwaps(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    LeftAndRightHandedDiv1 ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
