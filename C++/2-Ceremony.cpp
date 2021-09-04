#include <iostream>
#include <string>
#include <vector>

using namespace std;

int find_tallest_in_right(int index, vector<int> heights);

int main()
{
	vector<int> heights;
	vector<int> tallests_in_right;
	while(cin)
	{
		int input;
		cin >> input;
		heights.push_back(input);
	}

	heights.pop_back(); //it takes one input more than it should
	
	for (int i = 0; i < heights.size(); ++i)
		tallests_in_right.push_back(find_tallest_in_right(i, heights));

	for (int i = 0; i < tallests_in_right.size(); ++i)
		cout << tallests_in_right[i] << ' ';

	cout << endl;
}

int find_tallest_in_right(int index, vector<int> heights)
{
	int t = -1;
	for (int i = index + 1; i < heights.size(); ++i)
	{
		if (t < heights[i])
		{
			t = heights[i];
		}
	}

	return t;
}