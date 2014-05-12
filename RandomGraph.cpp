// BEGIN CUT HERE

// END CUT HERE
#line 5 "RandomGraph.cpp"
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


class RandomGraph
{
  public:
	double p;
	double dp[55][55][55];
	bool vis[55][55][55];
	double calc(int n,int a,int b,int c)
	{
		if(!vis[a][b][c])
		{
			double res=0;
			if(n==0) res=1;
			else {
				vis[a][b][c]=1;
				int bad;
				
				//从剩余的点中取一个放到独立的点集里面
				bad=a+2*b+3*c;
				res+=pow(1-p,bad)*calc(n-1,a+1,b,c);
				//从独立的点集里面取一个，再从剩余点中取一个，组成一对放到成对的点集里面
				if(a>0)
				{
					bad=2*b+3*c;
					res+=pow(1-p,bad+a-1)*a*p*calc(n-1,a-1,b+1,c);
				}
				//从独立点集里面取连个点，再从剩余点中取一个，放到三个的点集里面
				if(a>1)
				{
					bad=2*b+3*c;
					res+=pow(1-p,bad)*(a*(a-1)/2)*(p*p)*pow(1.0-p,a-2)*calc(n-1,a-2,b,c+1);
				}
				//从剩余点中取一个，再从成对点集里面取一对点，放到三个的点集里面
				if(b>0)
				{
					bad=a+3*c;
					//三个点两条边
					res+=pow(1-p,bad)*(2*b)*p*pow(1-p,2*b-1)*calc(n-1,a,b-1,c+1);
					//三个点三条边
					res+=pow(1-p,bad)*b*p*p*pow(1-p,2*b-2)*calc(n-1,a,b-1,c+1);
				}
			}
			dp[a][b][c]=res;
		}
		return dp[a][b][c];
	}
    double probability(int n, int p)
    {
		memset(vis,0,sizeof(vis));
		this->p=p/1000.0;
		return 1.0-calc(n,0,0,0);
    }
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 7; int Arg1 = 0; double Arg2 = 0.0; verify_case(0, Arg2, probability(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 3; int Arg1 = 620; double Arg2 = 0.0; verify_case(1, Arg2, probability(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 4; int Arg1 = 500; double Arg2 = 0.59375; verify_case(2, Arg2, probability(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 8; int Arg1 = 100; double Arg2 = 0.33566851611343496; verify_case(3, Arg2, probability(Arg0, Arg1)); }
	void test_case_4() { int Arg0 = 15; int Arg1 = 50; double Arg2 = 0.5686761670525845; verify_case(4, Arg2, probability(Arg0, Arg1)); }
	void test_case_5() { int Arg0 = 50; int Arg1 = 10; double Arg2 = 0.7494276522159893; verify_case(5, Arg2, probability(Arg0, Arg1)); }
	void test_case_6() { int Arg0 = 50; int Arg1 = 1000; double Arg2 = 1.0; verify_case(6, Arg2, probability(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    RandomGraph ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
