// BEGIN CUT HERE

// END CUT HERE
#line 5 "EllysCandyGame.cpp"
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
暴力搜索，维护Elly的糖果数与Kris的糖果数差值最大，判断差值即可
*/

class EllysCandyGame
{
  public:
	static const int inf=100000000;
	vector<int> v;
	int calc(int dif)
	{
		int res=-inf;
		for(int i=0;i<v.size();i++)
		{
			if(v[i]==0) continue;
			int candy=v[i];
			if(i-1>=0) v[i-1]*=2;
			if(i+1<v.size()) v[i+1]*=2;
			v[i]=0;
			res=max(res,-calc(-(dif+candy)));
			v[i]=candy;
			if(i-1>=0) v[i-1]/=2;
			if(i+1<v.size()) v[i+1]/=2;
		}
		if(res==-inf) res=dif;
		return res;
	}
    string getWinner(vector <int> sweets)
    {
        this->v=sweets;
		int res=calc(0);
		if(res>0) return "Elly";
		else if(res<0) return "Kris";
		else return "Draw";
    }
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {20, 50, 70, 0, 30}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Kris"; verify_case(0, Arg1, getWinner(Arg0)); }
	void test_case_1() { int Arr0[] = {42, 13, 7}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Elly"; verify_case(1, Arg1, getWinner(Arg0)); }
	void test_case_2() { int Arr0[] = {10, 20}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Draw"; verify_case(2, Arg1, getWinner(Arg0)); }
	void test_case_3() { int Arr0[] = {3, 1, 7, 11, 1, 1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Kris"; verify_case(3, Arg1, getWinner(Arg0)); }
	void test_case_4() { int Arr0[] = {41, 449, 328, 474, 150, 501, 467, 329, 536, 440}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Kris"; verify_case(4, Arg1, getWinner(Arg0)); }
	void test_case_5() { int Arr0[] = {177, 131, 142, 171, 411, 391, 17, 222, 100, 298}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Elly"; verify_case(5, Arg1, getWinner(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    EllysCandyGame ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
