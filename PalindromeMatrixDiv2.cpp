// BEGIN CUT HERE

// END CUT HERE
#line 5 "PalindromeMatrixDiv2.cpp"
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

const int N=100;

class PalindromeMatrixDiv2
{
  public:
	int f[N];
	int index[10][10];
	int conta[N],contb[N];
	int calc(int s)
	{
		int res=0;
		while(s)
		{
			if(s&1) res++;
			s=s>>1;
		}
		return res;
	}
	void init()
	{
		for(int i=0;i<N;i++)
			f[i]=i;
	}
	int find(int x)
	{
		if(f[x]!=x) return find(f[x]);
		return f[x];
	}
	void unions(int x,int y)
	{
		f[find(x)]=find(y);
	}
    int minChange(vector <string> a, int r, int c)
    {
        int n=a.size();
		int m=a[0].length();
		int id=0;
		int res=99999999;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				index[i][j]=id++;
		for(int rs=0;rs<(1<<n);rs++)
		{
			if(calc(rs)==r)
			{
				for(int cs=0;cs<(1<<m);cs++)
				{
					if(calc(cs)==c)
					{
						init();
						for(int i=0;i<n;i++)
						{
							if(rs&(1<<i))
							{
								for(int j=0;j+j<m;j++)
									unions(index[i][j],index[i][m-j-1]);
							}
						}
						for(int i=0;i<m;i++)
						{
							if(cs&(1<<i))
							{
								for(int j=0;j+j<n;j++)
									unions(index[j][i],index[n-j-1][i]);
							}
						}
						memset(conta,0,sizeof(conta));
						memset(contb,0,sizeof(contb));
						for(int i=0;i<n;i++)
							for(int j=0;j<m;j++)
							{
								conta[find(index[i][j])]++;
								if(a[i][j]=='0') contb[find(index[i][j])]++;
							}
						int pre=0;
						for(int i=0;i<n;i++)
						{
							for(int j=0;j<m;j++)
							{
								int hh=index[i][j];
								pre+=min(contb[hh],conta[hh]-contb[hh]);
							}
						}
						res=min(res,pre);
					}
				}
			}
		}
		return res;
    }
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"0000"
,"1000"
,"1100"
,"1110"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; int Arg2 = 2; int Arg3 = 1; verify_case(0, Arg3, minChange(Arg0, Arg1, Arg2)); }
	void test_case_1() { string Arr0[] = {"0000"
,"1000"
,"1100"
,"1110"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; int Arg2 = 2; int Arg3 = 3; verify_case(1, Arg3, minChange(Arg0, Arg1, Arg2)); }
	void test_case_2() { string Arr0[] = {"01"
,"10"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; int Arg2 = 1; int Arg3 = 1; verify_case(2, Arg3, minChange(Arg0, Arg1, Arg2)); }
	void test_case_3() { string Arr0[] = {"1110"
,"0001"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; int Arg2 = 0; int Arg3 = 0; verify_case(3, Arg3, minChange(Arg0, Arg1, Arg2)); }
	void test_case_4() { string Arr0[] = {"01010101"
,"01010101"
,"01010101"
,"01010101"
,"01010101"
,"01010101"
,"01010101"
,"01010101"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; int Arg2 = 2; int Arg3 = 8; verify_case(4, Arg3, minChange(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    PalindromeMatrixDiv2 ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
