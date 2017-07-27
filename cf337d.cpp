/*#include<iostream>
#include<map>
#include<queue>
#include<algorithm>
#include<vector>
#include<utility>
#include<stack>
using namespace std;
typedef long int li;

vector<li> aff;
map<li, vector<li> > mp;
vector<li> l;
li size = 0;
int posho(li n, li m, li d, li val){
	//cout << "FOR " << val << endl;
	li dist = 0;
	bool discovered[100000] = {0};
	queue<pair<li, li> > q;
	q.push(make_pair(val, dist));
	discovered[val] = true;
	dist++;
	l.push_back(val);
	while(!q.empty()){
		li temp = q.front().first;
		dist = q.front().second;
		//cout << "q front : " << temp << "DIST " << dist << endl;
		q.pop();
		//cout << "Q front after pop " << q.front() << endl;
		for(li i = 0; i < mp[temp].size(); i++){
			if(dist <= d-1){
				if(discovered[mp[temp][i]] == false){
					l.push_back(mp[temp][i]);
				//cout << "s : " << mp[temp].size() << endl;
					//cout << "V " << mp[temp][i] << " " << vec[mp[temp][i]] << " DIST " << dist << endl;
					q.push(make_pair(mp[temp][i], dist+1));
					discovered[mp[temp][i]] = true;
				}
				//cout << "Q FRONT AFTER PUSH :" << q.front() << endl;
				
			}
			else return 0;
			
		}
		//dist++;
	}
	return 0;
}
int dfs(li n, li m, li d, li val){
	map<li, li> tree;
	stack<pair<li, li> > ms;
	//tree[val] = 0; 
	ms.push(make_pair(val, 0));
	bool discovered[100000] = {0};
	li dist = 0;
	tree[val] = 0;
	discovered[val] = true;
	while(!ms.empty()){
		li t = ms.top().first;
		//cout << "T " << t << " ";
		//tree[t] = ms.top().second;
		dist = ms.top().second;
		//cout << "DIST " << dist << endl;
		ms.pop();
		for(li i = 0; i < mp[t].size(); i++){
			if(discovered[mp[t][i]] == false){
				tree[mp[t][i]] = dist + 1;
				ms.push(make_pair(mp[t][i], dist+1));
				discovered[mp[t][i]] = true;
			}
		}
	}
	for(li i = 0; i < l.size(); i++){
		//cout << l.size() << endl;
		if(tree[l[i]] > d){
			//cout << "Erase : " << l[i] << " " << tree[l[i]] << endl;
			size--;
			//l[i] = 0;
		}
		//else cout << l[i] << " distance: " << tree[l[i]] << endl;
	}
	return 0;
}
int main(){
	li n, m, d;
	cin >> n >> m >> d;
	li t;
	for(long int i = 0; i < m; i++){
		cin >> t;
		aff.push_back(t);
	}
	li a, b;

	for(li i = 0; i < n-1; i++){
		cin >> a >> b;
		mp[a].push_back(b);
		mp[b].push_back(a);
	}
	//li count = 0;
	posho(n, m, d, aff[0]);
	size = (li)l.size();
	//cout << "l size : " << l.size() << endl;
	/*for(li i = 0; i < l.size(); i++){
		cout << l[i] <<  " ";
	}
	//cout << endl;
	for(li i = 1; i < m; i++){
		dfs(n, m, d, aff[i]);
	}
	cout << size;
	/*for(int i = 0; i < l.size(); i++){
		cout << l[i] << endl;
	}
	return 0;
}*/

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
const int maxN = 100001, INF = 1e9, rt = 1;
int n, m, d, af[maxN], max1[maxN], max2[maxN], idx[maxN], tmax[maxN];
vector<int> G[maxN];
void dfs(int u, int p){
    if(af[u]) max1[u] = 0;
    for(int i = 0; i < G[u].size(); ++i){
        int v = G[u][i];
        if(v == p) continue;
        dfs(v, u);
        if(max1[v]+1 > max1[u]){
            max2[u] = max1[u];
            max1[u] = max1[v]+1;
            idx[u] = v;
        }else if(max1[v] > max2[u]+1){
            max2[u] = max1[v]+1;
        }
    }
}
void rdfs(int u, int p){
    if(af[u]) tmax[u] = 0;
    if(idx[p] == u) tmax[u] = max(tmax[p]+1, max2[p]+1);
    else if(u != rt)tmax[u] = max(tmax[p]+1, max1[p]+1);
    for(int i = 0; i < G[u].size(); ++i){
        int v = G[u][i];
        if(v == p) continue;
        rdfs(v, u);
    }
}
int main(){
    scanf("%d%d%d", &n, &m, &d);
    for(int i = 0; i < m; ++i){
        int tmp;
        scanf("%d", &tmp);
        af[tmp] = true;
    }
    for(int i = 1; i < n; ++i){
        int u, v;
        scanf("%d%d", &u, &v);
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for(int i = 0; i <= n; ++i)
        max1[i] = max2[i] = tmax[i] = -INF;
    dfs(rt, rt);
    rdfs(rt, rt);
    int ans = 0;
    for(int i = 1; i <= n; ++i)
        if(tmax[i] <= d && max1[i] <= d) ans++;
    printf("%d\n", ans);
    return 0;
}