#include<iostream>
#include<map>
#include<queue>
#include<algorithm>
#include<vector>

using namespace std;
bool done[2000] = {0};
int main(){
	int n;
	cin >> n;
	//int start = 1;
	int sup;
	map<int, vector<int> > mp;
	queue<int> q;
	for(int i = 0; i < n; i++){
		cin >> sup;
		if(sup == -1){
			//start = i+1;
			q.push(i+1);
			boss.push_back(i+1);
		}
		mp[sup].push_back(i+1);
	}
	int curmax = 0;
	//q.push(boss.begin());
	//boss.erase(boss.being());
	
	while(!q.empty()){
		int start = q.front();
		int count = 1;
		if(done[start] != 1){
			done[start] = 1;
			queue<int> m;
			
			
	}


}