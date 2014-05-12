#line 5 "MinimumSquareEasy.cpp"
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

const int inf=1000000001;

class MinimumSquareEasy
{
  public:
    long long minArea(vector <int> x, vector <int> y)
    {
		int n=x.size();
		LL res=4.1e18;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int minx=inf,maxx=-inf,miny=inf,maxy=-inf;
				for(int k=0;k<n;k++)
				{
					if(k==i||k==j) continue;
					minx=min(x[k],minx);
					maxx=max(x[k],maxx);
					miny=min(y[k],miny);
					maxy=max(y[k],maxy);
				}
				LL side=max(maxx-minx,maxy-miny)+2;
				res=min(res,side*side);
			}
		}
		return res;
    }
    

};



// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
