#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<queue>
#include<utility>
using namespace std;
int dist[10006];
bool vis[10006];

int main(){
	int n, m;
	cin >> n >> m;
	queue<int> q;
	q.push(n);
	dist[n] = 0;
	vis[n] = 1;
	int cu;
	while(q.front() != m){
		cu = q.front();
		q.pop();
		if(cu != 0){
			if(!vis[cu-1]){
				vis[cu-1] = 1;
				dist[cu-1] = dist[cu] + 1;
				if(cu-1 == m) break;
				q.push(cu-1);

			}
			if(cu < m && 2*cu <= 10006 && !vis[cu*2]){
				vis[2*cu] = 1;
				dist[2*cu] = dist[cu] + 1;
				if(2*cu == m) break;
				q.push(2*cu);
			}
		}
	}
	cout << dist[m];
	return 0;
}