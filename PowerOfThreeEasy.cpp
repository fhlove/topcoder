// BEGIN CUT HERE

// END CUT HERE
#line 5 "PowerOfThreeEasy.cpp"
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



class PowerOfThreeEasy
{
  public:	
    string ableToGet(int x, int y)
    {
		set<PII> s;
		
		typedef pair<pair<int,int>,int> PPI;
		
		queue<PPI> q;
		PPI head;
		
		head.first.first=0;
		head.first.second=0;
		head.second=0;	
		s.insert(head.first);
		q.push(head);
		while(q.size())
		{
			head=q.front();
			if(head.first.first==x&&head.first.second==y) return "Possible";
			q.pop();
			for(int i=0;i<2;i++)
			{
				PPI temp;
				if(i==0)
				{
					temp=head;
					temp.first.first+=(int)pow(3,temp.second);
					temp.second++;
				}else {
					temp=head;
					temp.first.second+=(int)pow(3,temp.second);
					temp.second++;
				}
				if(temp.first.first<=x&&temp.first.second<=y&&s.count(temp.first)==0)
				{
					//fout<<temp.first.first<<"   "<<temp.first.second<<endl;
					q.push(temp);
					s.insert(temp.first);
				}
			}
		}
		return "Impossible";
    }
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 1; int Arg1 = 3; string Arg2 = "Possible"; verify_case(0, Arg2, ableToGet(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 1; int Arg1 = 1; string Arg2 = "Impossible"; verify_case(1, Arg2, ableToGet(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 3; int Arg1 = 0; string Arg2 = "Impossible"; verify_case(2, Arg2, ableToGet(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 1; int Arg1 = 9; string Arg2 = "Impossible"; verify_case(3, Arg2, ableToGet(Arg0, Arg1)); }
	void test_case_4() { int Arg0 = 3; int Arg1 = 10; string Arg2 = "Possible"; verify_case(4, Arg2, ableToGet(Arg0, Arg1)); }
	void test_case_5() { int Arg0 = 1093; int Arg1 = 2187; string Arg2 = "Possible"; verify_case(5, Arg2, ableToGet(Arg0, Arg1)); }
	void test_case_6() { int Arg0 = 0; int Arg1 = 0; string Arg2 = "Possible"; verify_case(6, Arg2, ableToGet(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    PowerOfThreeEasy ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
