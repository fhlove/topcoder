// BEGIN CUT HERE

// END CUT HERE
#line 5 "CoinReversing.cpp"
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

/*
首先每个硬币正面朝上的概率相等，所以期望值：p×N。
只需要求出来每个硬币正面朝上的概率p即可，正面朝上的概率即就是该硬币被选择偶数次的概率。
*/

class CoinReversing
{
  public:
    double expectedHeads(int N, vector <int> a)
    {
        double res=1.0;
		for(int i=0;i<a.size();i++)
		{
			double p=a[i]/(double)N;
			res=(1-res)*p+(1-p)*res;
		}
		return res*N;
    }
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 3; int Arr1[] = {2,2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); double Arg2 = 1.6666666666666667; verify_case(0, Arg2, expectedHeads(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 10; int Arr1[] = {10,10,10}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); double Arg2 = 0.0; verify_case(1, Arg2, expectedHeads(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 10; int Arr1[] = {2,7,1,8,2,8}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); double Arg2 = 4.792639999999999; verify_case(2, Arg2, expectedHeads(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 1000; int Arr1[] = {916,153,357,729,183,848,61,672,295,936}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); double Arg2 = 498.1980774932278; verify_case(3, Arg2, expectedHeads(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    CoinReversing ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
