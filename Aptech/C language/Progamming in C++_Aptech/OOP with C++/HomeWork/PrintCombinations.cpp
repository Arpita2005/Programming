#include <iostream>
#include <vector>
using namespace std;

// Function to print the contents of the given vector
void printCombination(vector<int> const &out)
{
	for (int i: out)
		cout << i << " ";

	cout << endl;
}

// Recursive function to print all combination of numbers
// from i to n having sum n
void recur(int i, int n, vector<int> &out)
{
	// if sum becomes n, print the combination
	if (n == 0)
		printCombination(out);

	// start from previous element in the combination till n
	for (int j = i; j <= n; j++)
	{
		// include current element from combination
		out.push_back(j);

		// recur with reduced sum
		recur(j, n - j, out);

		// backtrack - remove current element from combination
		out.pop_back();
	}
}

int main()
{
	int n = 5;

	vector<int> out;

	// recur all combination of numbers from 1 to n having sum n
	recur(1, n, out);

	return 0;
}
