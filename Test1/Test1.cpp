

#include <iostream>
#include<fstream>
#include<vector>
#include<string>
#include<map>

using namespace std;

int main()
{
	
	typedef map < string, vector<int>> SchoolBook;

	string line;
	string Surname;
	int pos;
	ifstream file;
	file.open("test.txt");

	while (!file.eof())
	{
		getline(file, line);
		pos=line.find('-');
		Surname = line.substr(0, pos);
		line = line.substr(pos + 1);
		pos = line.find(',');
		int num = stoi(line.substr(0, pos));

	}
}