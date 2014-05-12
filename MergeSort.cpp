#line 5 "MergeSort.cpp"
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
class MergeSort
{
  public:
	  int r;
	  vector<int> merge(vector<int> &sb,vector<int> &sc)
	  {
		  vector<int> ans;
		  int i,j;
		  i=0,j=0;
		  for(;i<sb.size()&&j<sc.size();)
		  {
			  if(sb[i]<sc[j]) ans.push_back(sb[i++]);
			  else if(sb[i]>sc[j]) ans.push_back(sc[j++]);
			  else {
				  ans.push_back(sb[i++]);
				  ans.push_back(sc[j++]);
			  }
			  r++;
		  }
		  for(;i<sb.size();i++) ans.push_back(sb[i]);
		  for(;j<sc.size();j++)
			  ans.push_back(sc[j]);
		  return ans;
	  }
	  void mergesort(vector<int> &a)
	  {
		  vector<int> s,sb,sc;
		  int i;
		  if(a.size()<=1) return;
		  for(i=0;i<a.size()/2;i++)
			  sb.push_back(a[i]);
		  for(;i<a.size();i++)
			  sc.push_back(a[i]);
		  mergesort(sb);
		  mergesort(sc);
		  a=merge(sb,sc);
	  }
	  int howManyComparisons(vector <int> numbers)
      {
		  r=0;
		  mergesort(numbers);
		  return r;
	  }
        

};


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
