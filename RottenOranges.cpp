#include <bits/stdc++.h>
using namespace std;

const int R = 3;
const int C = 5;

bool issafe(int i, int j)
{
	if (i >= 0 && i < R && j >= 0 && j < C)
		return true;
	return false;
}

int rotOranges(int v[R][C])
{
	bool changed = false;
	int no = 2;
	while (true) {
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				if (v[i][j] == no) {
					if (issafe(i + 1, j)
						&& v[i + 1][j] == 1) {
						v[i + 1][j] = v[i][j] + 1;
						changed = true;
					}
					if (issafe(i, j + 1)
						&& v[i][j + 1] == 1) {
						v[i][j + 1] = v[i][j] + 1;
						changed = true;
					}
					if (issafe(i - 1, j)
						&& v[i - 1][j] == 1) {
						v[i - 1][j] = v[i][j] + 1;
						changed = true;
					}
					if (issafe(i, j - 1)
						&& v[i][j - 1] == 1) {
						v[i][j - 1] = v[i][j] + 1;
						changed = true;
					}
				}
			}
		}

		if (!changed)
			break;
		changed = false;
		no++;
	}

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (v[i][j] == 1)
				return -1;
		}
	}
	return no - 2;
}

int main()
{

	int v[R][C] = { { 2, 1, 0, 2, 1 },
					{ 1, 0, 1, 2, 1 },
					{ 1, 0, 0, 2, 1 } };

	cout << "Max time incurred: " << rotOranges(v);

	return 0;
}
