// BEGIN CUT HERE

// END CUT HERE
#line 5 "TaroString.cpp"
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


class TaroString
{
  public:
    string getAnswer(string S)
    {
        string str="CAT";
		int index=0;
		int cont[3]={0};
		for(int i=0;i<S.length();i++)
		{
			if(S[i]=='C') cont[0]++;
			else if(S[i]=='A') cont[1]++;
			else if(S[i]=='T') cont[2]++;
			if(cont[0]>1||cont[1]>1||cont[2]>1) return "Impossible";
		}
		for(int i=0;i<S.length();i++)
		{
			if(S[i]==str[index])
			{
				index++;
			}
		}
		if(index==3) return "Possible";
		return "Impossible";
    }
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "XCYAZTX"; string Arg1 = "Possible"; verify_case(0, Arg1, getAnswer(Arg0)); }
	void test_case_1() { string Arg0 = "CTA"; string Arg1 = "Impossible"; verify_case(1, Arg1, getAnswer(Arg0)); }
	void test_case_2() { string Arg0 = "ACBBAT"; string Arg1 = "Impossible"; verify_case(2, Arg1, getAnswer(Arg0)); }
	void test_case_3() { string Arg0 = "SGHDJHFIOPUFUHCHIOJBHAUINUIT"; string Arg1 = "Possible"; verify_case(3, Arg1, getAnswer(Arg0)); }
	void test_case_4() { string Arg0 = "CCCATT"; string Arg1 = "Impossible"; verify_case(4, Arg1, getAnswer(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    TaroString ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
