//Exercise 11.7: Define a map for which the key is the family’s last nameand
//the value is a vector of the children’s names.Write code to add new
//families and to add new children to an existing family.

#include <map>
#include <vector>
#include <iostream>
#include <string>
#include <iterator>

using namespace std;

void addFamily(map<string, vector<string>>& family, const string& last_name);
void printMap(map<string, vector<string>>& m);
void addChild(map<string, vector<string>>& m, string& family, string kidName);

int main() {
	map<string, vector<string>> kids;
	string Smiths{ "Smith" };

	string Lees{ "Lee" };

	addFamily(kids, Smiths);
	addChild(kids, Smiths, "Kevin");
	addChild(kids, Smiths, "Ada");
	printMap(kids);

}

void addFamily(map<string, vector<string>>& family, const string& last_name) {
	family[last_name];
}

void printMap(map<string, vector<string>>& m)
{
	for (auto it = m.begin(); it != m.end(); ++it)
	{
		cout << "Family " << it->first << " children: ";
		for (auto it2 = it->second.begin(); it2 != it->second.end(); ++it2)
		{
			cout << *it2 << " ";
		}

		cout << endl;
	}
}

void addChild(map<string, vector<string>>& m, string& family, string kidName)
{
	m[family].push_back(kidName);
}