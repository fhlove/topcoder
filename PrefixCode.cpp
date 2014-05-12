#line 7 "PrefixCode.cpp"
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


class PrefixCode
{
  public:
    string isOne(vector <string> words)
    {
		int index=(int)words.size();
		int n=(int)words.size();
		stringstream fin;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(words[i].length()<words[j].length())
				{
					if(words[j].find(words[i])==0) index=min(index,i);
				}else if(words[i].length()>words[j].length()){
                    if(words[i].find(words[j])==0) index=min(index,j);
				}
			}
		}
		fin<<index;
		string str=fin.str();
		if(index==n) str="Yes";
		else str="No, "+fin.str();
		return str;
    }


};



// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
