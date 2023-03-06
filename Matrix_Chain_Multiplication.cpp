//Matrix Chain Multiplication Top Down Develop A Top Down Dynamic Programming Algorithm To Find Minimum Cost For Matrix
#include <iostream>
#define INT_MAX 2147483647
using namespace std;
void matrixChainMultiplication(int p[], int n)
{
    // n is the number of matrices and p[] is the array of dimensions
    // print M table as well as S table.
    int m[n][n], s[n][n];       // initialize m and s table
    for (int i = 1; i < n; i++) // initialize m table
        m[i][i] = 0;            // diagonal elements are 0
    for (int l = 2; l < n; l++)
    { // l is the chain length
        for (int i = 1; i < n - l + 1; i++)
        {                      // i is the starting index
            int j = i + l - 1; // j is the ending index
            m[i][j] = INT_MAX; // initialize m[i][j] to infinity
            for (int k = i; k <= j - 1; k++)
            {                                                           // k is the partition index
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]; // calculate q
                if (q < m[i][j])
                {                // if q is less than m[i][j]
                    m[i][j] = q; // update m[i][j]
                    s[i][j] = k; // update s[i][j]
                }
            }
        }
    }
    for (int i = 1; i < n; i++)
    {                                   // print m table
        for (int j = i + 1; j < n; j++) // print m[i][j]
            cout << m[i][j] << " ";
        if (i != n - 1)   // if i is not the last row
            cout << endl; // print new line
    }
    for (int i = 1; i < n; i++)
    {                                   // print s table
        for (int j = i + 1; j < n; j++) // print s[i][j]
            cout << s[i][j] << " ";
        if (i != n - 1)   // if i is not the last row
            cout << endl; // print new line
    }
    cout << m[1][n - 1] << endl; // print the minimum number of multiplications
}
int main()
{
    // main function
    int n;    // number of matrices
    cin >> n; // input number of matrices
    int p[n]; // array of dimensions
    for (int i = 0; i < n; i++)
    {                // input dimensions
        int temp;    // temporary variable to store dimension
        cin >> temp; // input dimension
        p[i] = temp; // store dimension in array
    }
    matrixChainMultiplication(p, n); // call matrixChainMultiplication function
    return 0;                        // return 0
}
