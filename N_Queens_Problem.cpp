#include<iostream>
using namespace std;
#define N 8
void printMatrix(int arr[N][N]) {
   for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++)
         cout << arr[i][j] << " ";
         cout << endl;
   }
}
bool isValid(int arr[N][N], int row, int col) {
   for (int i = 0; i < col; i++)
      if (arr[row][i])
         return false;
   for (int i=row, j=col; i>=0 && j>=0; i--, j--)
      if (arr[i][j])
         return false;
   for (int i=row, j=col; j>=0 && i<N; i++, j--)
      if (arr[i][j]) 
         return false;
   return true;
}
bool solveNQueen(int arr[N][N], int col) {
   if (col >= N)
      return true;
   for (int i = 0; i < N; i++) {
      if (isValid(arr, i, col) ) {
         arr[i][col] = 1;
         if ( solveNQueen(arr, col + 1))
            return true;
         arr[i][col] = 0;
      }
   }
   return false;
}
bool checkSolution() {
   int arr[N][N];
   for(int i = 0; i<N; i++)
   for(int j = 0; j<N; j++)
   arr[i][j] = 0;
   if ( solveNQueen(arr, 0) == false ) {
      cout << "0 Solution";
      return false;
   }
   printMatrix(arr);
   return true;
}
int main() {
   checkSolution();
}
