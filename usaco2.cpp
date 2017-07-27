/*
ID: ritik.d1
LANG: C++
TASK: gift1
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int search(string names[], string name, int n){
	for(int i = 0; i < n; i++){
		if(names[i] == name) return i;
	}
}
int main(){
	ofstream fout ("gift1.out");
	ifstream fin ("gift1.in");
	int n;
	fin >> n;
	string names[n];
	for(int i = 0; i < n; i++){
		fin >> names[i];
	}
	string name;
	int acc[n] = {0};
	for(int j = 0; j < n; j++){

		fin >> name;
		int ind = search(names, name, n);
		int amount, num;
		string nam;
		fin >> amount >> num;
		if(amount != 0){
		acc[ind] = acc[ind] - amount;
		int final = (int)amount/num;
		int left = (int)amount%num;
		for(int k = 0; k < num; k++){
			fin >> nam;
			int place = search(names, nam, n);
			acc[place] = acc[place] + final;
		}
		acc[ind] = acc[ind] + left;
		}
	}
	for(int u = 0; u < n; u++){
		fout << names[u] << " " << acc[u] << endl;
	}
	return 0;

}