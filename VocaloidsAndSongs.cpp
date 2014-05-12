// BEGIN CUT HERE

// END CUT HERE
#line 5 "VocaloidsAndSongs.cpp"
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

const int N=55;
const int mod=1000000007;
int dp[N][N][N][N];
class VocaloidsAndSongs
{
  public:	
	void Mod(int &x)
	{
		x%=mod;
	}
    int count(int S, int gumi, int ia, int mayu)
    {
        memset(dp,0,sizeof(dp));
		dp[0][0][0][0]=1;
		for(int i=1;i<=S;i++)
		{
			for(int j=0;j<=gumi;j++)
			{
				for(int k=0;k<=ia;k++)
				{
					for(int s=0;s<=mayu;s++)
					{
						if(j+k+s==0) continue;
						//cout<<"---"<<endl;
						int res=dp[i][j][k][s];
						if(j>0) res+=dp[i-1][j-1][k][s];
						Mod(res);
						if(k>0) res+=dp[i-1][j][k-1][s];
						Mod(res);
						if(s>0) res+=dp[i-1][j][k][s-1];
						Mod(res);
						if(j>0&&k>0) res+=dp[i-1][j-1][k-1][s];
						Mod(res);
						if(j>0&&s>0) res+=dp[i-1][j-1][k][s-1];
						Mod(res);
						if(s>0&&k>0) res+=dp[i-1][j][k-1][s-1];
						Mod(res);
						if(j>0&&k>0&&s>0) res+=dp[i-1][j-1][k-1][s-1];
						Mod(res);
						dp[i][j][k][s]=res;
					}
				}
			}
		}
		return dp[S][gumi][ia][mayu];
    }
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 3; int Arg1 = 1; int Arg2 = 1; int Arg3 = 1; int Arg4 = 6; verify_case(0, Arg4, count(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 3; int Arg1 = 3; int Arg2 = 1; int Arg3 = 1; int Arg4 = 9; verify_case(1, Arg4, count(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 50; int Arg1 = 10; int Arg2 = 10; int Arg3 = 10; int Arg4 = 0; verify_case(2, Arg4, count(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 18; int Arg1 = 12; int Arg2 = 8; int Arg3 = 9; int Arg4 = 81451692; verify_case(3, Arg4, count(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_4() { int Arg0 = 50; int Arg1 = 25; int Arg2 = 25; int Arg3 = 25; int Arg4 = 198591037; verify_case(4, Arg4, count(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    VocaloidsAndSongs ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
