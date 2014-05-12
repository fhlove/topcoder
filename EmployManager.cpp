#line 5 "EmployManager.cpp"
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


class EmployManager
{
  public:
    int maximumEarnings(vector <int> value, vector <string> earning)
    {
        int res=0;
		for(int i=0;i<earning.size();i++)
			for(int j=i+1;j<earning.size();j++)
				res+=(earning[i][j]-'0');
		for(int i=0;i<value.size();i++)
			res-=value[i];
		for(int i=0;i<value.size();i++)
		{
			int sum=0;
			for(int j=0;j<earning.size();j++)
				sum+=(earning[i][j]-'0');
			if(value[i]>=sum)
			{
				res+=(value[i]-sum);
			}
		}
		//if(res<=-1) res=-1;
		return res;
    }
    

};



// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
