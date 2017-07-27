#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<cstdlib>

using namespace std;
int main(){
	int a = 100;
	cin >> a;
	int boys[a];
	for(int i = 0; i < a; i++){
		cin >> boys[i];
	}
	int b = 100;
	cin >> b;
	int girls[b];
	for(int i = 0; i < b; i++){
		cin >> girls[i];
	}
	sort(boys, boys + a);
	sort(girls, girls + b);
	int ans = 0;
	map<int, std::vector<int> > v;
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			if(abs(boys[i] - girls[j]) <= 1){
				ans++;
				girls[j] = 1000;
				break;
			}
		}
	}
	cout << ans;
	return 0;
}