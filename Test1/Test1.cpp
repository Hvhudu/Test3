

#include <iostream>
#include<fstream>
#include<vector>
#include<string>
#include<map>

using namespace std;

int main()
{
	map < string, vector<int>> SchoolBook;
	pair< string, vector<int>> element;

	vector<int>elem1;
	string line, temp;
	string Surname;
	int pos, num;
	ifstream file;
	if (file.open("test.txt")) {

		while (!file.eof())
		{
			elem1.clear();
			getline(file, line);
			if (!line.empty()) {
				pos = line.find('-');
				Surname = line.substr(0, pos);
				line = line.substr(pos + 1);
			}
			while (line.find(",") != string::npos)
			{
				pos = line.find(",");
				temp = line.substr(0, pos);
				num = stoi(temp);
				line = line.substr(pos + 1);
				elem1.push_back(num);
			}
			num = stoi(line);
			elem1.push_back(num);

		}
		file.close();


	}

	auto element =element(Surname, elem1);
	SchoolBook.insert(element);
}
	
	}
	else cout << "Error!";

	for (auto item : SchoolBook) {
		cout << item.first;

		for (auto grade : item.second) {
			cout << grade << ", ";
		}
		cout << endl;
}