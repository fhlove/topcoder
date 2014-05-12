// BEGIN CUT HERE

// END CUT HERE
#line 5 "TwoLLogo.cpp"
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

const int N=905;
/*
分析：题目要求出总共有多少对不同的 L，首先想到枚举拐点，然后统计出来该拐点向上最大的高度和向右最远的宽度，然后计算。
	计算：首先总数是res=(h1-1)*(h2-1)*(w1-1)*(w2-1),然后要减去不合法的情况，我们默认第一个 L在上边，如果高度相同让第一个靠左边，假设两拐点坐标分别是(x1,y1),(x2,y2);
	xx=c-a+1,yy=d-b+1;
	不合法情况：当x1==x2时：res-=(h1-1)*max(w1-xx+1,0)*(w2-1)*(h2-1);
	....*...
	.*..*..
	.***!**.
	........
	........
	当y1==y2时： res-=(h1-1)*(w1-1)*(w2-1)*max(h2-y+1,0);
	...*....
	...*....
	...!**..
	...*....
	...*....
	...****.
	........
	当y2>y1时： res-=(h1-1)*max(w1-x+1,0)*(w2-1)*max(h2-y+1,0);
	..*.....
	..*..*..
	..***!!.
	.....*..
	.....***
	........
	........
	........
*/
class TwoLLogo
{
  public:
	LL calc(int a,int b,int h1,int w1,
			int c,int d,int h2,int w2)
	{
		if(a>c||(a==c&&b>d))
			return calc(c,d,h2,w2,a,b,h1,w1);
		LL res=(h1-1)*(h2-1)*(w1-1)*(w2-1);
		if(a==c)
		{
			int x=d-b+1;	
			res-=(LL)(h1-1)*max(w1-x+1,0)*(h2-1)*(w2-1);
		}else if(b==d) {
			int x=c-a+1;
			res-=(LL)(w1-1)*(h1-1)*(w2-1)*max(h2-x+1,0);
		}else if(d>b) {
			int x=d-b+1;
			int y=c-a+1;
			res-=(LL)(h1-1)*max(w1-x+1,0)*(w2-1)*max(h2-y+1,0);
		}
		return res;
	}
    long long countWays(vector <string> grid)
    {
		int x[N],y[N];
		int maxh[N],maxw[N];
		int cont=0;
		int n=grid.size();
		int m=grid[0].size();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(grid[i][j]=='.')
				{
					int ii=0;
					while(i-ii>=0&&grid[i-ii][j]=='.') ii++;
					maxh[cont]=ii;
					ii=0;
					while(j+ii<m&&grid[i][j+ii]=='.') ii++;
					maxw[cont]=ii;
					if(maxh[cont]>1&&maxw[cont]>1)
					{
						x[cont]=i;
						y[cont]=j;
						cont++;
					}
				}
			}
		}
		LL res=0;
		for(int i=0;i<cont;i++)
		{
			for(int j=i+1;j<cont;j++)
			{
				LL temp=calc(x[i],y[i],maxh[i],maxw[i],x[j],y[j],maxh[j],maxw[j]);	
				res+=temp;
			}
		}
		return res;
    }
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); if ((Case == -1) || (Case == 7)) test_case_7(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"....",
 "...."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 1LL; verify_case(0, Arg1, countWays(Arg0)); }
	void test_case_1() { string Arr0[] = {".##..",
 "...#.",
 ".#.#.",
 "#...#"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 3LL; verify_case(1, Arg1, countWays(Arg0)); }
	void test_case_2() { string Arr0[] = {"..#.",
 "#.#.",
 "....",
 "..#."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 4LL; verify_case(2, Arg1, countWays(Arg0)); }
	void test_case_3() { string Arr0[] = {"..",
 ".."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 0LL; verify_case(3, Arg1, countWays(Arg0)); }
	void test_case_4() { string Arr0[] = {".#.#",
 "....",
 ".#.#",
 "...."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 34LL; verify_case(4, Arg1, countWays(Arg0)); }
	void test_case_5() { string Arr0[] = {"##############",
 "##############",
 "#.############",
 "#.############",
 "#.############",
 "#.############",
 "#.############",
 "#.############",
 "#.#####.######",
 "#.#####.######",
 "#.#####.######",
 "#....##.######",
 "#######.######",
 "#######.######",
 "#######.######",
 "#######.######",
 "#######.######",
 "#######.######",
 "#######......#",
 "##############"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 1350LL; verify_case(5, Arg1, countWays(Arg0)); }
	void test_case_6() { string Arr0[] = {"#......",
 ".#....#",
 ".#.#...",
 "#....#.",
 ".##..#.",
 ".#.....",
 ".....#.",
 ".#.#...",
 ".#...#.",
 "..##..."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 2386LL; verify_case(6, Arg1, countWays(Arg0)); }
	void test_case_7() { string Arr0[] = {"...#..........................",
 "..............................",
 "..............................",
 "..................#...#.......",
 "..................#...........",
 "..............................",
 "...........#..................",
 "..............................",
 ".....#..#.....................",
 ".......................#......",
 "..................#.....#.....",
 "..............................",
 "..............................",
 "..............................",
 "..............................",
 "..#...........................",
 "..............................",
 "..............................",
 "..............................",
 "#............................#",
 "..............................",
 ".....#.........#............#.",
 "..............................",
 ".........................#....",
 ".#............................",
 ".............#................",
 "..............................",
 "..............................",
 ".......................#......",
 ".............#................"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 5020791386LL; verify_case(7, Arg1, countWays(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    TwoLLogo ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
