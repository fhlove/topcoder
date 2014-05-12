#line 5 "LongWordsDiv2.cpp"
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


class LongWordsDiv2
{
  public:
    string find(string word)
    {
        set<string> s;	
		int n=word.size();
		for(int i=0;i<n-1;i++)
		{
			if(word[i]==word[i+1])
			{
				return "Dislikes";
				break;
			}
		}
		for(int i=0;i<n;i++)
		{
			set<string> x;
			for(int j=i+1;j<n;j++)
			{
				string temp="";

				temp+=word[i];
				temp+=word[j];
				
				cout<<temp<<endl;	
				
				if(s.count(temp)>0&&x.count(temp)==0) return "Dislikes";
				else s.insert(temp);
				x.insert(temp);
			}
		}
		return "Dislikes";
    }
    

};



// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
