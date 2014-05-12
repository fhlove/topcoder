// BEGIN CUT HERE

// END CUT HERE
#line 5 "MiningGoldEasy.cpp"
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

const int NM=60;

class MiningGoldEasy
{
  public:
	int dp[NM][NM][NM];
	vector<int> vi,vj;
	int n;
	int N,M;
	int calc(int x,int y,int cont)
	{
		if(cont==n) return 0;
		int &res=dp[x][y][cont];
		if(res!=-1) return res;
		res=0;
		
		int val=N+M-abs(vi[cont]-vi[x])-abs(vj[cont]-vj[y]);
		
		//cout<<val<<endl;
		
		for(int i=cont;i<n;i++)
			res=max(res,calc(i,y,cont+1)+val);

		for(int i=cont;i<n;i++)
			res=max(res,calc(x,i,cont+1)+val);
		
		return res;
	}
    int GetMaximumGold(int N, int M, vector <int> ei, vector <int> ej)
    {
        this->n=ei.size();
		this->N=N;
		this->M=M;
		this->vi=ei;
		this->vj=ej;
		memset(dp,-1,sizeof(dp));
		int res=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				res=max(res,calc(i,j,0));
			}
		}
		return res;
    }
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 2; int Arg1 = 2; int Arr2[] = {0}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {0}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 4; verify_case(0, Arg4, GetMaximumGold(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 2; int Arg1 = 2; int Arr2[] = {0, 2}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {0, 1}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 7; verify_case(1, Arg4, GetMaximumGold(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 3; int Arg1 = 3; int Arr2[] = {0, 3, 3}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {0, 3, 0}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 15; verify_case(2, Arg4, GetMaximumGold(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 3; int Arg1 = 4; int Arr2[] = {0, 3}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {4, 1}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 11; verify_case(3, Arg4, GetMaximumGold(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_4() { int Arg0 = 5; int Arg1 = 6; int Arr2[] = {0, 4, 2, 5, 0}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {3, 4, 5, 6, 0}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 48; verify_case(4, Arg4, GetMaximumGold(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_5() { int Arg0 = 557; int Arg1 = 919; int Arr2[] = {81, 509, 428, 6, 448, 149, 77, 142, 40, 405, 109, 247}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {653, 887, 770, 477, 53, 637, 201, 863, 576, 393, 512, 243}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 16255; verify_case(5, Arg4, GetMaximumGold(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    MiningGoldEasy ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
