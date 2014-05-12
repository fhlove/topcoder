// BEGIN CUT HERE

// END CUT HERE
#line 5 "PowersOfTwo.cpp"
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
分析：dp[i][j]表示第 i 位为 0 或 1 的时在第 i 位上的进位为 j 的总数。
*/
const int N=65;
class PowersOfTwo
{
  public:
	LL dp[N][N];
	LL dfs(vector<LL> &x,int bit,int x_bit)
	{
		LL res=dp[bit][x_bit];
		if(res!=-1) return res;

		if(bit==x.size()) return 1;

		res=0;
		
		int temp=x_bit+x[bit];
		
		res+=dfs(x,bit+1,temp/2);
		
		if(temp>0) res+=dfs(x,bit+1,(temp-1)/2);
		
		dp[bit][x_bit]=res;
		
		return res;
	}
    long long count(vector<long long> powers)
    {
        vector<LL> x(60);
		for(int i=0;i<x.size();i++)
		{
			x[i]=std::count(powers.begin(),powers.end(),1LL<<i);
		}
		memset(dp,-1,sizeof(dp));
		LL res=dfs(x,0,0);
		return res;
    }
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { LL Arr0[] = {1,2}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 4LL; verify_case(0, Arg1, count(Arg0)); }
	void test_case_1() { LL Arr0[] = {1,1,1,1}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 5LL; verify_case(1, Arg1, count(Arg0)); }
	void test_case_2() { LL Arr0[] = {1,2,2,2,4,4,16}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 32LL; verify_case(2, Arg1, count(Arg0)); }
	void test_case_3() { LL Arr0[] = {1,32,1,16,32}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 18LL; verify_case(3, Arg1, count(Arg0)); }
	void test_case_4() { long long Arr0[] = {1048576,1073741824,549755813888,70368744177664,4398046511104,262144,1048576,2097152,8796093022208,
 1048576,1048576,35184372088832,2097152,256,256,256,262144,1048576,1048576,70368744177664,262144,1048576}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 18432LL; verify_case(4, Arg1, count(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    PowersOfTwo ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
