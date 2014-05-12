#line 5 "AlienAndGame.cpp"
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<sstream>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<fstream>
#include<numeric>
#include<iomanip>
#include<bitset>
#include<list>
#include<stdexcept>
#include<functional>
#include<utility>
#include<ctime>
using namespace std;
class AlienAndGame
{
        public:
    int getNumber(vector <string> board)
    {
		int n=(int)board.size();
		int m=(int)board[0].length();
		for(int ans=min(n,m);ans>0;ans--)
		{
			for(int i=0;i+ans<=n;i++)
			{
				for(int j=0;j+ans<=m;j++)
				{
					bool flag=true;
					for(int r=i;r<i+ans&&flag;r++)
					{
						for(int c=j+1;c<j+ans;c++)
						{
							if(board[r][c]!=board[r][c-1])
							{
								flag=false;
								break;
							}
						}
					}
					if(flag) return ans*ans;
				}
			}
		}
		return 1;
    }
    

};

/*
BWBBWBB
WWBWWBW
BBBBBBW
WBBBBWB
BBWWWWB
WWWWWWW
BBWWBBB
 */


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
