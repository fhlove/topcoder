// BEGIN CUT HERE

// END CUT HERE
#line 5 "BinaryCode.cpp"
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
class BinaryCode
{
        public:
         vector <string> decode(string message)  
    {  
		string x="NONE";
		string y="0";
		string z="1";
		vector<string> ans;
		if(message.size()==1)
		{
			if(message[0]=='0')
				ans.push_back(y),ans.push_back(x);
			else if(message[0]=='1') ans.push_back(x),ans.push_back(z);
			if(ans.size()>0)
				return ans;
		}
        bool f[2]={1,1};  
        vector <string> r(2);  
        r[0].push_back('0');  
        r[0].push_back(char(message[0]-0));  
        r[1].push_back('1');  
        r[1].push_back(char(message[0]-1));  
        for(int i=1;i<message.size()-1;i++)  
        {  
            if(f[0] && (message[i]+'0')>=(r[0][i]+r[0][i-1])) r[0].push_back(char(message[i]+'0'+'0'-r[0][i]-r[0][i-1]));  
            else {f[0]=0;r[0]="NONE";}  
            if(f[1] && (message[i]+'0')>=(r[1][i]+r[1][i-1])) r[1].push_back(char(message[i]+'0'+'0'-r[1][i]-r[1][i-1]));  
            else {f[1]=0;r[1]="NONE";}  
        }  
        if((message[message.size()-1]+'0')!=(r[0][message.size()-1]+r[0][message.size()-2])) r[0]="NONE";  
        if((message[message.size()-1]+'0')!=(r[1][message.size()-1]+r[1][message.size()-2])) r[1]="NONE";  
        return r;  
    }  
        
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <string> &Expected, const vector <string> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { string Arg0 = "123210122"; string Arr1[] = { "011100011",  "NONE" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, decode(Arg0)); }
	void test_case_1() { string Arg0 = "11"; string Arr1[] = { "01",  "10" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, decode(Arg0)); }
	void test_case_2() { string Arg0 = "22111"; string Arr1[] = { "NONE",  "11001" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, decode(Arg0)); }
	void test_case_3() { string Arg0 = "123210120"; string Arr1[] = { "NONE",  "NONE" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, decode(Arg0)); }
	void test_case_4() { string Arg0 = "3"; string Arr1[] = { "NONE",  "NONE" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(4, Arg1, decode(Arg0)); }
	void test_case_5() { string Arg0 = "12221112222221112221111111112221111"; string Arr1[] = { "01101001101101001101001001001101001",  "10110010110110010110010010010110010" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(5, Arg1, decode(Arg0)); }

// END CUT HERE

};
// BEGIN CUT HERE
int main()
{
        BinaryCode ___test;
        ___test.run_test(-1);
        return 0;
}
// END CUT HERE
