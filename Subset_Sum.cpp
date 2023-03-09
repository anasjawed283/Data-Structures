#include <iostream>
#include <vector>
using namespace std;
int function(vector<int> arr, int i, int target)
{

	if (target == 0 && i == arr.size())
		return 1;
	if (i >= arr.size())
		return 0;
	return function(arr, i + 1, target)+ function(arr, i + 1, target - arr[i])+ function(arr, i + 1, target + arr[i]);
}
int main()
{
	vector<int> arr = {5, 3, -6, 2};
	int target = 6;
	cout << function(arr, 0, target) << endl;
	return 0;
}
