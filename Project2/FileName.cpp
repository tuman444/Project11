#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "Header.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ofstream fout;
	ifstream fin;
	int a = COUNT("file.txt");
	cout << "Количество строк = " << a << endl;
	vector <string> stud;
	fin.open("file.txt");
	for (size_t i = 0; i < a; i++)
	{
		string s;
		getline(fin, s);
		stud.push_back(s);
	}
	fin.close();

	sort(stud.begin(), stud.end());

	cout << stud.back();

}