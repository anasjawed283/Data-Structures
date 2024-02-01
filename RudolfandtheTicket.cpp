/*Rudolf is going to visit Bernard, and he decided to take the metro to get to him.
The ticket can be purchased at a machine that accepts exactly two coins, the sum of which does not exceed k.
Rudolf has two pockets with coins. In the left pocket, there are n
 coins with denominations b1,b2,…,bn
. In the right pocket, there are m
 coins with denominations c1,c2,…,cm
. He wants to choose exactly one coin from the left pocket and exactly one coin from the right pocket (two coins in total).
Help Rudolf determine how many ways there are to select indices f
 and s
 such that bf+cs≤k
.
Input
The first line contains an integer t
 (1≤t≤100
) — the number of test cases. Then follows the description of each test case.

The first line of each test case contains three natural numbers n
, m
, and k
 (1≤n,m≤100,1≤k≤2000
) — the number of coins in the left and right pockets, and the maximum sum of two coins for the ticket payment at the counter, respectively.

The second line of each test case contains n
 integers bi
 (1≤bi≤1000
) — the denominations of coins in the left pocket.

The third line of each test case contains m
 integers ci
 (1≤ci≤1000
) — the denominations of coins in the right pocket.

Output
For each testcase, output a single integer — the number of ways Rudolf can select two coins, taking one from each pocket, so that the sum of the coins does not exceed k
.*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int arr1[n];
        int arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr1[i] + arr2[j] <= k)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}