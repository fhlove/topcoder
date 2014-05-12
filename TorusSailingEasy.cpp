#line 5 "TorusSailingEasy.cpp"
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


class TorusSailingEasy
{
  public:
    double expectedTime(int N, int M, int goalX, int goalY)
    {
        int dx=abs(N-goalX);
		int dy=abs(M-goalY);
		if(goalX==0&&goalY==0) return 0;
		int x=0,y=0;
		double s1=0,s2=0;
		while(true)
		{
			x=(x+1)%N;
			y=(y+1)%M;
			s1+=1;
			if(x==0&&y==0) return -1;
			if(x==goalX&&y==goalY) break;
		}
		x=0;
		y=0;
		while(true)
		{
			x=(x-1+N)%N;
			y=(y-1+M)%M;
			s2+=1;
			if(x==0&&y==0) return -1;
			if(x==goalX&&y==goalY) break;
		}
		return s1*s2;
    }
    

};



// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
