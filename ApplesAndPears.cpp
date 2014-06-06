// BEGIN CUT HERE

// END CUT HERE
#line 5 "ApplesAndPears.cpp"
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
先预处理出来，然后暴力枚举判断
*/
const int N=55;

class ApplesAndPears
{
  public:
	int cont[N][N][3];
	int k;
	int a,p,e;
	bool judge(int aa,int pp,int ee)
	{
		int ra=a-aa;
		int rp=p-pp;
		int re=e-ee;	
		
		if((re>0||ee>0)&&ra>=ee+pp&&ee+pp*2<=k) return 1;
		
		if((re>0||ee>0)&&rp>=ee+aa&&ee+aa*2<=k) return 1;

		if(re>=aa+pp&&aa+pp<=k) return 1;
		
		return 0;
	}
    int getArea(vector <string> board, int K)
    {
		this->k=K;
		int res=1;
		int n=board.size();
		memset(cont,0,sizeof(cont));
		for(int i=1;i<=n;i++)
		{	
			for(int j=1;j<=n;j++)
			{
				cont[i][j][0]=cont[i-1][j][0]+cont[i][j-1][0]-cont[i-1][j-1][0];
				cont[i][j][1]=cont[i-1][j][1]+cont[i][j-1][1]-cont[i-1][j-1][1];
				cont[i][j][2]=cont[i-1][j][2]+cont[i][j-1][2]-cont[i-1][j-1][2];
				int x=i-1;
				int y=j-1;
				if(board[x][y]=='A') cont[i][j][0]++;
				else if(board[x][y]=='P') cont[i][j][1]++;
				else if(board[x][y]=='.') cont[i][j][2]++;
			}
		}
		

		this->a=cont[n][n][0];
		this->p=cont[n][n][1];
		this->e=cont[n][n][2];
		for(int x1=1;x1<=n;x1++)
		{
			for(int y1=1;y1<=n;y1++)
			{
				for(int x2=x1;x2<=n;x2++)
				{
					for(int y2=y1;y2<=n;y2++)
					{
						int aa=cont[x2][y2][0]-cont[x1-1][y2][0]-cont[x2][y1-1][0]+cont[x1-1][y1-1][0];
						
						int pp=cont[x2][y2][1]-cont[x1-1][y2][1]-cont[x2][y1-1][1]+cont[x1-1][y1-1][1];
						
						int ee=cont[x2][y2][2]-cont[x1-1][y2][2]-cont[x2][y1-1][2]+cont[x1-1][y1-1][2];

						int dx=x2-x1+1;
						int dy=y2-y1+1;
						int s=dx*dy;
						if(judge(aa,pp,ee)||ee==s||aa==s||pp==s) 
						{
							res=max(res,s);
							//if(s>8) printf("%d %d  %d %d   %d %d %d  s:%d\n",x1,y1,x2,y2,aa,pp,ee,s);
						}
					}
				}
			}
		}
		return res;
    }
    
// BEGIN CUT HERE
//{{"PPPPP", "AAPAP", "..A..", "PPPPP", "AAAAA"}, 5}
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }

	void test_case_0() { string Arr0[] = {"PPPPP", "AAPAP", "..A..", "PPPPP", "AAAAA"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); 
int Arg1 = 5; int Arg2 = 8; verify_case(0, Arg2, getArea(Arg0, Arg1)); }

	void test_case_1() { string Arr0[] = {".A",
 "P."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; int Arg2 = 2; verify_case(1, Arg2, getArea(Arg0, Arg1)); }
	void test_case_2() { string Arr0[] = {".PP", 
 "PPA", 
 "PAP"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; int Arg2 = 6; verify_case(2, Arg2, getArea(Arg0, Arg1)); }
	void test_case_3() { string Arr0[] = {"A.P.PAAPPA",
 "PPP..P.PPP",
 "AAP.A.PAPA",
 "P.PA.AAA.A",
 "...PA.P.PA",
 "P..A.A.P..",
 "PAAP..A.A.",
 "PAAPPA.APA",
 ".P.AP.P.AA",
 "..APAPAA.."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 10; int Arg2 = 21; verify_case(3, Arg2, getArea(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    ApplesAndPears ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
