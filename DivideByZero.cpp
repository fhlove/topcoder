#line 5 "DivideByZero.cpp"
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


class DivideByZero
{
  public:
    int CountNumbers(vector <int> numbers)
    {
        //sort(numbers.begn(),numbers.end());
		int n=numbers.size();
		set<int> s;
		for(int i=0;i<n;i++)
			s.insert(numbers[i]);
		set<int>::iterator i,j;
		while(true)
		{
			bool flag=0;
			for(i=s.begin();i!=s.end();i++)
			{
				for(j=i,j++;j!=s.end();j++)
				{
					int temp=(*j)/(*i);
					if(s.count(temp)==0)
						flag=1;
					s.insert(temp);
				}
			}
			if(!flag) break;
		}
		int res=s.size();
		return res;
    }
    

};



// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
