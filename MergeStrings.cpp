#line 5 "MergeStrings.cpp"
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


const int N=60;
class MergeStrings
{
  public:
	void init(string dp[N][N])
	{
		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++)
				dp[i][j]="|";
	}
    string getmin(string S, string A, string B)
    {
		string dp[N][N];
		init(dp);
		int n1=A.length();
		int n2=B.length();
		dp[0][0]="";
		for(int i=0;i<=n1;i++)
		{
			for(int j=0;j<=n2;j++)
			{
				if(i==0&&j==0) continue;
				int pos=i+j-1;
				if(i-1>=0&&(A[i-1]==S[pos]||S[pos]=='?'))
				{
					if(dp[i-1][j]!="|")
					{
						if(dp[i][j]>dp[i-1][j]+A[i-1]) dp[i][j]=dp[i-1][j]+A[i-1];
					}
				}
				if(j-1>=0&&(B[j-1]==S[pos]||S[pos]=='?'))
				{
					if(dp[i][j-1]!="|")
					{
						if(dp[i][j]>dp[i][j-1]+B[j-1]) dp[i][j]=dp[i][j-1]+B[j-1];
					}
				}
			}
		}
		string ans="";
		if(dp[n1][n2]!="|") ans=dp[n1][n2];
		return ans;
    }
        

};


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
