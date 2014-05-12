// BEGIN CUT HERE

// END CUT HERE
#line 5 "SuperRot.cpp"
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
class SuperRot
{
        public:
        string decoder(string message)
        {
            map<char,char> trans;
			char temp='N';
			for(char i='A';i<='M';i++)
				trans[i]=temp+(i-'A'),trans[char(temp+(i-'A'))]=i;
			temp='n';
			for(char i='a';i<='m';i++)
				trans[i]=temp+(i-'a'),trans[char(temp+(i-'a'))]=i;
			temp='5';
			for(char i='0';i<='4';i++)
				trans[i]=temp+(i-'0'),trans[char(temp+(i-'0'))]=i;
			string res="";
			for(int i=0;i<message.size();i++)
			{
				if(message[i]==' ') res+=" ";
				else res+=trans[message[i]];
			}
			return res;
        }
        
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "Uryyb 28"; string Arg1 = "Hello 73"; verify_case(0, Arg1, decoder(Arg0)); }
	void test_case_1() { string Arg0 = "GbcPbqre"; string Arg1 = "TopCoder"; verify_case(1, Arg1, decoder(Arg0)); }
	void test_case_2() { string Arg0 = ""; string Arg1 = ""; verify_case(2, Arg1, decoder(Arg0)); }
	void test_case_3() { string Arg0 = "5678901234"; string Arg1 = "0123456789"; verify_case(3, Arg1, decoder(Arg0)); }
	void test_case_4() { string Arg0 = "NnOoPpQqRr AaBbCcDdEe"; string Arg1 = "AaBbCcDdEe NnOoPpQqRr"; verify_case(4, Arg1, decoder(Arg0)); }
	void test_case_5() { string Arg0 = "Gvzr vf 54 71 CZ ba Whyl 4gu bs gur lrne 7558 NQ"; string Arg1 = "Time is 09 26 PM on July 9th of the year 2003 AD"; verify_case(5, Arg1, decoder(Arg0)); }
	void test_case_6() { string Arg0 = "Gur dhvpx oebja sbk whzcf bire n ynml qbt"; string Arg1 = "The quick brown fox jumps over a lazy dog"; verify_case(6, Arg1, decoder(Arg0)); }

// END CUT HERE

};
// BEGIN CUT HERE
int main()
{
        SuperRot ___test;
        ___test.run_test(-1);
        return 0;
}
// END CUT HERE
