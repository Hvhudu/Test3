

#include <iostream>
#include<fstream>
#include<vector>
#include<string>
#include<map>

using namespace std;

int main()
{
	
	map < string, vector<int>> SchoolBook;
	pair< string, vector<int>> elem;
	vector<int>elem1;
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
		elem.first = Surname;
		do {
			line = line.substr(pos + 1);
			pos = line.find(',');
			int num = stoi(line.substr(0, pos));
			elem1.push_back(num);
		} while (line != ';');
		elem.second = elem1;
		SchoolBook.insert(elem);
	}
	file.close();

	for (auto elem : SchoolBook) {
		
		cout << elem.first;
		for (auto item : elem.second) {

			cout << item;
		}
	}
}