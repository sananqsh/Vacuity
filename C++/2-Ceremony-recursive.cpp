//enter a list of heights, and you`ll be given a vector that indicates the taller height of each element on the right subset(excluding that element) respectively
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void build_tallest_in_right(vector<int> heights, vector<int> & tallests_in_right, int idx = 0)
{
	if (idx == heights.size() - 1)
	{
		tallests_in_right.push_back(-1);	//last element does not have anything on its right
		return;
	}

	//see if there`s anything bigger than this element
	int check = -1;
	
	for (int i = idx + 1; i < heights.size(); ++i)
		if (heights[i] > check)
			check = heights[i];

	tallests_in_right.push_back(check);

	build_tallest_in_right(heights, tallests_in_right, idx + 1);
}

int main()
{
	vector<int> heights;
	vector<int> tallests_in_right;

	cout << "Press Ctrl+D to submit all the inputs.\n";

	int input;
	while(cin)
	{
		cin >> input;
		heights.push_back(input);
	}

	heights.pop_back(); //it takes one input more than it should

	build_tallest_in_right(heights, tallests_in_right);

	cout << endl;

	for (int i = 0; i < tallests_in_right.size(); ++i)
		cout << tallests_in_right[i] << ' ';

	cout << endl;
}