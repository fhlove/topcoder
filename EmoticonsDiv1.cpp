// BEGIN CUT HERE

// END CUT HERE
#line 5 "EmoticonsDiv1.cpp"
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
const int inf=9999999;
const int N=1005;
struct node
{
	int have,copy;
};

class EmoticonsDiv1
{
  public:
	int vis[N*2][N];
	void init()
	{
		for(int i=0;i<2*N;i++)
			for(int j=0;j<N;j++)
				vis[i][j]=inf;
	}
    int printSmiles(int smiles)
    {
		init();
		node head,temp;
		queue<node> q;
		head.have=1;
		head.copy=0;
		q.push(head);
		vis[1][0]=0;
		while(q.size())
		{
			head=q.front();
			int st=vis[head.have][head.copy];
			q.pop();
			if(head.have+head.copy<=2*smiles&&vis[head.have+head.copy][head.copy]>=inf)
			{
				temp=head;
				temp.have+=temp.copy;
				vis[temp.have][temp.copy]=st+1;
				q.push(temp);
			}
			if(head.have<=smiles&&vis[head.have][head.have]>=inf)
			{
				temp=head;
				temp.copy=temp.have;
				vis[temp.have][temp.copy]=st+1;
				q.push(temp);
			}
			if(head.have-1>=0&&vis[head.have-1][head.copy]>=inf)
			{
				temp=head;
				temp.have--;
				vis[temp.have][temp.copy]=st+1;
				q.push(temp);
			}
		}
		int res=inf;
		for(int i=0;i<=smiles;i++)
			res=min(res,vis[smiles][i]);
		return res;
    }
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 2; int Arg1 = 2; verify_case(0, Arg1, printSmiles(Arg0)); }
	void test_case_1() { int Arg0 = 4; int Arg1 = 4; verify_case(1, Arg1, printSmiles(Arg0)); }
	void test_case_2() { int Arg0 = 6; int Arg1 = 5; verify_case(2, Arg1, printSmiles(Arg0)); }
	void test_case_3() { int Arg0 = 18; int Arg1 = 8; verify_case(3, Arg1, printSmiles(Arg0)); }
	void test_case_4() { int Arg0 = 11; int Arg1 = 8; verify_case(4, Arg1, printSmiles(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    EmoticonsDiv1 ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
