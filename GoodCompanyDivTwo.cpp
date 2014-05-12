#line 5 "GoodCompanyDivTwo.cpp"
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


class GoodCompanyDivTwo
{
  public:
    int countGood(vector <int> superior, vector <int> workType)
    {
		
		int n=superior.size();
        int res=n;
		for(int i=0;i<n;i++)
		{
			set<int> s;
			s.insert(workType[i]);
			int cont=1;
			for(int j=i+1;j<n;j++)
				if(superior[j]==i) s.insert(workType[j]),cont++;
			//cout<<cont<<"  "<<s.size()<<endl;
			if(cont!=s.size())
				res--;
		}
		return res;
    }
    

};



// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
