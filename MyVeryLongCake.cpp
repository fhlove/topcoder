// BEGIN CUT HERE

// END CUT HERE
#line 5 "MyVeryLongCake.cpp"
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
class MyVeryLongCake
{
public:
	vector<int> v;
	bool is[100005];
  public:
	void prime()
	{
		memset(is,0,sizeof(is));
		for(int i=2;i<100005;i++)
		{
			if(is[i]) continue;
			v.push_back(i);
			for(int j=i*2;j<100005;j+=i)
				is[j]=1;
		}
	}
    int cut(int n)
    {
		prime();
		int x=n;
		int y=n;
		int ans=0;
		for(int i=0;i<v.size();i++)
		{
			if(x%v[i]==0)
			{
				y=(y-y/v[i]);
				while(x%v[i]==0) x/=v[i];
			}
		}
		if(x>1)
		{
			y=(y-y/x);
		}
		ans=n-y;
		return ans;
    }
        
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 6; int Arg1 = 4; verify_case(0, Arg1, cut(Arg0)); }
	void test_case_1() { int Arg0 = 3; int Arg1 = 1; verify_case(1, Arg1, cut(Arg0)); }
	void test_case_2() { int Arg0 = 15; int Arg1 = 7; verify_case(2, Arg1, cut(Arg0)); }
	void test_case_3() { int Arg0 = 1000000000; int Arg1 = 600000000; verify_case(3, Arg1, cut(Arg0)); }
	void test_case_4() { int Arg0 = 577007436; int Arg1 = 384671628; verify_case(4, Arg1, cut(Arg0)); }

// END CUT HERE

};
// BEGIN CUT HERE
int main()
{
        MyVeryLongCake ___test;
        ___test.run_test(-1);
        return 0;
}
// END CUT HERE
