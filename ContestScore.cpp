// BEGIN CUT HERE

// END CUT HERE
#line 5 "ContestScore.cpp"
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
#include <ctime>
using namespace std;
typedef long long ll;
#define clr(x,a) memset(x,a,sizeof(x))
#define sz(x) (int)x.size()
#define see(x) cerr<<#x<<" "<<x<<endl
#define se(x) cerr<<" "<<x 
#define pb push_back
#define mp make_pair


int n,m;
class ContestScore
{
        public:
        vector <string> sortResults(vector <string> data)
        {
            int i,j,k;
        }
        
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <string> &Expected, const vector <string> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { string Arr0[] = {"A 90.7 92.9 87.4",
 "B 90.5 96.6 88.0",
 "C 92.2 91.0 95.3"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { "C 5 278.5",  "B 6 275.1",  "A 7 271.0" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, sortResults(Arg0)); }
	void test_case_1() { string Arr0[] = {"STANFORD 85.3 90.1 82.6 84.6 96.6 94.5 87.3 90.3",
 "MIT 95.5 83.9 80.4 85.5 98.7 98.3 96.7 82.7",
 "PRINCETON 99.2 79.1 87.6 85.1 93.6 96.4 86.0 90.6",
 "HARVARD 83.6 92.0 85.5 94.3 97.5 91.5 92.5 83.0",
 "YALE 99.5 92.6 86.2 82.0 96.4 92.6 84.5 78.6",
 "COLUMBIA 97.2 87.6 81.7 93.7 88.0 86.3 95.9 89.6",
 "BROWN 92.2 95.8 92.1 81.5 89.5 87.0 95.5 86.4",
 "PENN 96.3 80.7 81.2 91.6 85.8 92.2 83.9 87.8",
 "CORNELL 88.0 83.7 85.0 83.8 99.8 92.1 91.0 88.9"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { "PRINCETON 34 717.6",  "MIT 36 721.7",  "HARVARD 38 719.9",  "COLUMBIA 39 720.0",  "STANFORD 39 711.3",  "YALE 40 712.4",  "BROWN 41 720.0",  "CORNELL 42 712.3",  "PENN 51 699.5" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, sortResults(Arg0)); }
	void test_case_2() { string Arr0[] = {}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, sortResults(Arg0)); }
	void test_case_3() { string Arr0[] = {"AA 90.0 80.0 70.0 60.0 50.0 40.0",
 "BBB 80.0 70.0 60.0 50.0 40.0 90.0",
 "EEE 70.0 60.0 50.0 40.0 90.0 80.0",
 "AAA 60.0 50.0 40.0 90.0 80.0 70.0",
 "DDD 50.0 40.0 90.0 80.0 70.0 60.0",
 "CCC 40.0 90.0 80.0 70.0 60.0 50.0"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { "AA 21 390.0",  "AAA 21 390.0",  "BBB 21 390.0",  "CCC 21 390.0",  "DDD 21 390.0",  "EEE 21 390.0" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, sortResults(Arg0)); }
	void test_case_4() { string Arr0[] = {"A 00.1", "B 05.2", "C 29.0","D 00.0"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { "C 1 29.0",  "B 2 5.2",  "A 3 0.1",  "D 4 0.0" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(4, Arg1, sortResults(Arg0)); }

// END CUT HERE

};
// BEGIN CUT HERE
int main()
{
        ContestScore ___test;
        ___test.run_test(-1);
        return 0;
}
// END CUT HERE
