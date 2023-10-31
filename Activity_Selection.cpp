/* In activity selection problem we have given activity start time and end time we have to find out
how many activity we can do i.e maximum number of activites that we can do. overlapping activites
we can't do. 
EX:{(2,3),(1,4),(5,8),(6,10)} 
O/P:2
only two activites  either {(2,3),(5,8)} or {(1,4),(6,10)}
EX:{(1,3),(2,4),(3,8),(10,11)}
O/P:3  {(1,3),(3,8),(10,11)}
maximum no.of activites that can happen on single tasking  machine
idea to solve the given problem a navie solution has time complexity expoential 
but better approach has time complexity O(nlogn)*/
/*algorithm
1)sort the activity according to end time
i.e=EX:{(2,4),(3,8),(10,11),(1,3)}
sorted actvity according end time {(1,3),(2,4),(3,8),(10,11)}
2)intiliaze the first activity always as the solution 
3) check further activites 
1) if further activites are overlapping just ignore it 
2)if not overlapping  consider it in the solution*/

#include<iostream>
#include<algorithm>
using namespace std;
void printMaxActivities(int s[], int f[], int n)
{
    int i, j;
 
    // The first activity always gets selected
    i = 0;
    //cout <<" "<< i;
 
    // Consider rest of the activities
    for (j = 1; j < n; j++)
    {
      // If this activity has start time greater than or
      // equal to the finish time of previously selected
      // activity, then select it
      if (s[j] >= f[i])
      {
         // cout <<" " << j;
          i = j;
      }
    }
	cout<<i;
}
 
// driver program to test above function
int main()
{
    int s[] =  {1, 3, 0, 5, 8, 5};
    int f[] =  {2, 4, 6, 7, 9, 9};
    int n = sizeof(s)/sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}
