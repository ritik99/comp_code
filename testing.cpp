#include<iostream>
#include<cstdio>
#include<utility>
#include<string>
#include<cstdlib>
#include<vector>
using namespace std;

int main(){
	//freopen("testfile.txt", "w", stdout);
	long long int num_testcases;
	long long int range_testcases;
	int no_groups;
	long long int group_range[100];
	int no_var_group[100];

	cout << "Range of test cases: ";
	cin >> range_testcases;
	num_testcases = rand() % range_testcases+1;
	cout << "No. groups of variables: ";
	cin >> no_groups;
	for(int i = 0; i < no_groups; i++){
		cout << "Range of group " << i+1 << " : ";
		cin >> group_range[i];
	}
	for(int i = 0; i < no_groups; i++){
		cout << "No. variables in groups " << i+1 << " : ";
		cin >> no_var_group[i];
	}
	string line;
	cout << "Enter format : ";
	vector<string> format;
	while(cin >> line && line != "end"){
		format.push_back(line);
	}
	freopen("testfile.txt", "w", stdout);
	cout << num_testcases << endl;
	while(num_testcases--){
		for()
	}	


}