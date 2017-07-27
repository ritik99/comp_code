#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
#include<vector>
using namespace std;
int main(){
	vector<string> names;
	string name = "";
	while(name != "ZYTA"){
		fin >> name;
		names.push_back(name);
	}

	ifstream fin ("namenum.in");
	ofstream fout ("namenum.out");
	ifstream data ("dict.txt");
	int dig;
	fin >> dig;
	

}