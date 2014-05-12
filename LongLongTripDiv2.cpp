#line 5 "LongLongTripDiv2.cpp"
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
class LongLongTripDiv2
{
  public:
    string isAble(long long D, int T, int B)
    {
		long long time=D/B;
		long long mod=D%B;
		long long temp=(long long)(T);
		long long xx=time+mod;
		long long mid=99999999;
		if(B-1>0)
			mid=(temp-xx)/(B-1);
		//cout<<time<<"  "<<mid<<endl;
		if(temp<xx||(B-1)<=0||(temp-xx)%(B-1)!=0||mid>time) return "Impossible";
		else return "Possible";
    }
        

};


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
