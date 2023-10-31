/* edit distance problem in which we find out the how many operation required change
one string to another string
by using tabular method in which  an temporary array of dimension number of variable
that are changing in recurison
EX:S1="CAT" and S2="CUT"
the parameter that  we are using in recursion are size of strigs
hence temporary array as size 2 dimensional
temp[m+1][n+1] where m,n are size of respetive array
 */
#include <iostream>
using namespace std;
int dp_edit_distance(string s1, string s2, int m, int n)
{
  int dp[m + 1][n + 1];
  for (int j = 0; j < n + 1; j++)
  {
    dp[0][j] = j;
  }
  for (int i = 0; i < m + 1; i++)
  {
    dp[i][0] = i;
  }
  for (int i = 1; i < m + 1; i++)
  {
    for (int j = 1; j < n + 1; j++)
    {
      if (s1[i - 1] == s2[j - 1])
      {
        dp[i][j] = dp[i - 1][j - 1];
      }
      else
      {
        dp[i][j] = 1 + min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]);
      }
    }
  }
  return dp[m][n];
}
int main()
{
  string s1 = "CAT";
  string s2 = "CUT";
  cout << dp_edit_distance(s1, s2, 3, 3);
  return 0;
}
