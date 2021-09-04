#include <iostream>
#include <string>

using namespace std;

string encrypt(string str);

string move_char_to_beggining(int char_idx, string str);

int mid_idx(int size);

int main()
{
	string plain_text;
	getline(cin, plain_text);
	
	string cipher_text = encrypt(plain_text);
	cout << cipher_text << endl;
}

string move_char_to_beggining(int char_idx, string str)
{
	string result = str;
	result[0] = str[char_idx];
	for (int i = 0; i < str.size(); ++i)
	{
		if (i < char_idx)
			result[i + 1] = str[i];
		else
			result[i + 1] = str[i + 1];
	}
	return result;
}

string encrypt(string str)
{
	int middle_index = mid_idx(str.size());
	if (str.size() <= 2)
		return str;
	else
	{
		str = move_char_to_beggining(middle_index, str);																//middle
		str.replace(1, middle_index, encrypt(str.substr(1, middle_index)));												//left substring
		str.replace(middle_index + 1, str.size(), encrypt(str.substr(middle_index + 1, str.size() - middle_index)));	//right substring
	}
	return str;
}

int mid_idx(int size)
{
	if (size % 2 == 0)
		return size / 2 - 1;
	else
		return (size - 1) / 2;
}