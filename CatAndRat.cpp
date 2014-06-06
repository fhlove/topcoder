// BEGIN CUT HERE

// END CUT HERE
#line 5 "CatAndRat.cpp"
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

const double PI=acos(-1);
const double inf=1e-9;

class CatAndRat
{
  public:
    double getTime(int R, int T, int Vrat, int Vcat)
    {
        if(Vrat>=Vcat) return -1.0;
		double r_pos=Vrat*T;
		double cir=2*R*PI;

		if(r_pos>cir/2) r_pos=cir/2;

		if(r_pos<=inf) return 0;
		double temp=cir-r_pos;
		double res=min(temp/(Vcat-Vrat),r_pos/(Vcat-Vrat));

		return res;
    }
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 10; int Arg1 = 1; int Arg2 = 1; int Arg3 = 1; double Arg4 = -1.0; verify_case(0, Arg4, getTime(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 10; int Arg1 = 1; int Arg2 = 1; int Arg3 = 2; double Arg4 = 1.0; verify_case(1, Arg4, getTime(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 10; int Arg1 = 1; int Arg2 = 2; int Arg3 = 1; double Arg4 = -1.0; verify_case(2, Arg4, getTime(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 1000; int Arg1 = 1000; int Arg2 = 1; int Arg3 = 1000; double Arg4 = 1.001001001001001; verify_case(3, Arg4, getTime(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_4() { int Arg0 = 1; int Arg1 = 1000; int Arg2 = 1; int Arg3 = 2; double Arg4 = 3.141592653589793; verify_case(4, Arg4, getTime(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    CatAndRat ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
