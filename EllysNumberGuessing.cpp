// BEGIN CUT HERE

// END CUT HERE
#line 5 "EllysNumberGuessing.cpp"
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


class EllysNumberGuessing
{
  public:
    int getNumber(vector <int> guesses, vector <int> answers)
    {
		int res=-2;
        int x[2]={guesses[0]-answers[0],guesses[0]+answers[0]};
		for(int i=0;i<2;i++)
		{
			bool flag=(x[i]>=1&&x[i]<=1000000000);
			for(int j=0;j<guesses.size();j++)
			{
				flag=flag&&(abs(guesses[j]-x[i])==answers[j]);
			}
			if(flag)
			{
				if(res!=-2) res=-1;
				else res=x[i];
			}
		}
		return res;
    }
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {600, 594}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {6, 12}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 606; verify_case(0, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {100, 50, 34, 40}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {58, 8, 8, 2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 42; verify_case(1, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {500000, 600000, 700000}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {120013, 220013, 79987}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = -2; verify_case(2, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {500000000}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {133742666}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = -1; verify_case(3, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_4() { int Arr0[] = {76938260, 523164588, 14196746, 296286419, 535893832,
 41243148, 364561227, 270003278, 472017422, 367932361,
 395758413, 301278456, 186276934, 316343129, 336557549,
 52536121, 98343562, 356769915, 89249181, 335191879}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {466274085, 20047757, 529015599, 246925926, 7318513,
 501969197, 178651118, 273209067, 71194923, 175279984,
 147453932, 241933889, 356935411, 226869216, 206654796,
 490676224, 444868783, 186442430, 453963164, 208020466}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 543212345; verify_case(4, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_5() { int Arr0[] = {42}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {42}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 84; verify_case(5, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_6() { int Arr0[] = {999900000}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {100001}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 999799999; verify_case(6, Arg2, getNumber(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    EllysNumberGuessing ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
