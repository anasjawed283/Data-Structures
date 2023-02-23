// Rabin karp Algorithm
// Find the given two strings pattern string and text string and  to print the position of occurrences of the pattern in the text.
// Input
// text – “ababcdabcb”
// pattern – “abc”

// Output
// 2 6

#include <string.h>
#include <iostream>
using namespace std;

#define d 10

void function(char P[], char T[], int q) {
  int m = strlen(P);
  int n = strlen(T);
  int i, j;
  int p = 0;
  int t = 0;
  int h = 1;

  for (i = 0; i < m - 1; i++)
    h = (h * d) % q;

  for (i = 0; i < m; i++) {
    p = (d * p + P[i]) % q;
    t = (d * t + T[i]) % q;
  }

  for (i = 0; i <= n - m; i++) {
    if (p == t) {
      for (j = 0; j < m; j++) {
        if (T[i + j] != P[j])
          break;
      }

      if (j == m)
        cout<< i<<" ";
    }

    if (i < n - m) {
      t = (d * (t - T[i] * h) + T[i + m]) % q;

      if (t < 0)
        t = (t + q);
    }
  }
}
int main() {
  char T[] = "ababcdabcb";
  char P[] = "abc";
  int q = 10;
  function(P, T, q);
}
