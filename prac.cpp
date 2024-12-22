#include <bits/stdc++.h>
using namespace std;

int main()
{

   int n, m;
   cin >> n >> m;

   int allocation[n][m], max[n][m], available[m];

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         cin >> allocation[i][j];
      }
   }

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         cin >> max[i][j];
      }
   }

   for (int i = 0; i < m; i++)
   {
      cin >> available[i];
   }

   int need[n][m];

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         need[i][j] = max[i][j] - allocation[i][j];
      }
   }

   return 0;
}