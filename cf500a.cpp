#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<queue>

using namespace std;
int arr[30001];
bool reached[30001] = {0};
int main(){
	int n, t;
	cin >> n >> t;
	map<int, vector<int> > mp;
	int m;
	for(int i = 0; i < n-1; i++){
		cin >> m;
		arr[i+1] = i+1+m;
	}
	int pos = 1;
	arr[n] = 1;
	//bool flag = false;
	while(reached[pos] != 1){
		reached[pos] = 1;
		//cout << "pos " << pos <<  " " << t << endl;
		if(pos == t){
			cout << "YES";
			return 0;
		}
		else pos = arr[pos];
	}
	cout << "NO";
	return 0;
	/*queue<int> q;
	q.push(1);
	discovered[n] = {0}
	while(!q.empty()){
		int cur = q.front()
		for(int j = 0; j < mp[cur].size(); j++){
			if(cur == t){
				cout << "YES";
				return 0;n
			}
			if(discovered[mp[cur][j]] == 0){
				q.push(mp[cur][j]);
				discovered[mp[cur][j]] = 1;
			}
		}
	}*/

}