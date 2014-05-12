// BEGIN CUT HERE

// END CUT HERE
#line 5 "TaroCards.cpp"
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
分析：dp[s][i][j]表示前 i 张卡片 1 到 10 之间的数字集合 s，大于10的数字出现了j次满足条件的卡片集合的个数.
*/
LL dp[1025][51][41];
class TaroCards
{
  public:
	vector<int> x,y;
	int k;
	int n;
	int count(int x)
	{
		int res=0;
		while(x)
		{
			if(x&1) res++;
			x=x>>1;
		}
		return res;
	}
	LL calc(int s,int cont,int f)
	{

		LL res=dp[s][cont][f];
		if(res!=-1) return res;

		if(cont==n)
		{
			return (count(s)+f<=k)? 1:0;
		}
        res=0;
		res+=calc(s,cont+1,f);

		int nf=f;
		int ns=s;

		int num[2]={x[cont],y[cont]};

		for(int i=0;i<2;i++)
		{
			if(num[i]<=10)
			{
				ns=ns|(1<<(num[i]-1));
			}else nf++;
		}

		res+=calc(ns,cont+1,nf);
		dp[s][cont][f]=res;	
		return res;
	}
    long long getNumber(vector <int> first, vector <int> second, int K)
    {
        LL res=0;
		memset(dp,-1,sizeof(dp));
		this->x=first;
		this->y=second;
		this->k=K;
		this->n=first.size();
		res=calc(0,0,0);
		return res;
    }

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1, 2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2, 3}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 2; long long Arg3 = 3LL; verify_case(0, Arg3, getNumber(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arr0[] = {3, 1, 2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1, 1, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 3; long long Arg3 = 8LL; verify_case(1, Arg3, getNumber(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arr0[] = {4, 2, 1, 3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1, 2, 3, 4}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 5; long long Arg3 = 16LL; verify_case(2, Arg3, getNumber(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arr0[] = {1, 2, 3, 4, 5, 6, 7}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2, 1, 10, 9, 3, 2, 2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 3; long long Arg3 = 17LL; verify_case(3, Arg3, getNumber(Arg0, Arg1, Arg2)); }
	void test_case_4() { int Arr0[] = {1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 1; long long Arg3 = 1LL; verify_case(4, Arg3, getNumber(Arg0, Arg1, Arg2)); }
	void test_case_5() { int Arr0[] = {6, 20, 1, 11, 19, 14, 2, 8, 15, 21, 9, 10, 4, 16, 12, 17, 13, 22, 7, 18, 3, 5}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {4, 5, 10, 7, 6, 2, 1, 10, 10, 7, 9, 4, 5, 9, 5, 10, 10, 3, 6, 6, 4, 4}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 14; long long Arg3 = 2239000LL; verify_case(5, Arg3, getNumber(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    TaroCards ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
