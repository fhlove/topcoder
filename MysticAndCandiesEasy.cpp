// BEGIN CUT HERE

// END CUT HERE
#line 5 "MysticAndCandiesEasy.cpp"
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


class MysticAndCandiesEasy
{
  public:
    int minBoxes(int C, int X, vector <int> high)
    {
        int res=0;
		int sum=0;
		sort(high.begin(),high.end());
		for(int i=0;i<high.size();i++)
		{
			sum+=high[i];
			if(C-sum<X)
			{
				res=i;
				break;
			}
		}
		return high.size()-res;
    }
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 10; int Arg1 = 10; int Arr2[] = {20}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 1; verify_case(0, Arg3, minBoxes(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arg0 = 10; int Arg1 = 7; int Arr2[] = {3, 3, 3, 3, 3}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 4; verify_case(1, Arg3, minBoxes(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arg0 = 100; int Arg1 = 63; int Arr2[] = {12, 34, 23, 45, 34}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 3; verify_case(2, Arg3, minBoxes(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arg0 = 19; int Arg1 = 12; int Arr2[] = {12, 9, 15, 1, 6, 4, 9, 10, 10, 10, 14, 14, 1, 1, 12, 10, 9, 2, 3, 6, 1, 7, 3, 4, 10, 3, 14}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 22; verify_case(3, Arg3, minBoxes(Arg0, Arg1, Arg2)); }
	void test_case_4() { int Arg0 = 326; int Arg1 = 109; int Arr2[] = {9, 13, 6, 6, 6, 16, 16, 16, 10, 16, 4, 3, 10, 8, 11, 17, 12, 5, 7, 8, 7, 4, 15, 7, 14, 2, 2, 1, 17, 1, 7, 7, 12, 17, 2, 9, 7, 1, 8, 16, 7, 4, 16, 2, 13, 3, 13, 1, 17, 6}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 15; verify_case(4, Arg3, minBoxes(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    MysticAndCandiesEasy ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
