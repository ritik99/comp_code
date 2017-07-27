#include<iostream>
#include<list>
using namespace std;
class graph{
	int V;
	list<int> *adj;
public:
	graph(int V);
	void addedge(int v, int w);
	void BFS(int s);
};

graph::graph(int V){
	this->V = V;
	adj = new list<int>[V];
}

void graph::addedge(int V, int w){
	adj[v].push_back(w);
}

void graph::BFS(int s){
	bool *visited = new bool[V];
	for(int i = 0; i < V; i++){
		visited[i] = false;
	}
	list<int> queue;
	visited[s] = true;
	queue.push_back(s);
	list<int>::iterator i;
	while(!queue.empty()){
		s = queue.front();
		cout << s << " ":
		queue.pop_front();
		for(i = adj[s].begin(); i != adj[s].end(); i++){
			if(!visited[*i]){
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}

