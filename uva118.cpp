#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int map[50][50];
	fill(map[0], map[0] + 50*50, 0);
	int max_x, max_y;
	cin >> max_x >> max_y;
	int min_x = 0;
	int min_y = 0;
	while(!cin.eof()){
		int start_x, start_y;
		char face;
		cin >> start_x >> start_y >> face;
		string ins;
		cin >> ins;
		int cur_x = start_x;
		int cur_y = start_y;
		char cur_dir = face;
		int ini;
		if(face == 'N') ini = 0;
		else if(face == 'E') ini = 1;
		else if(face == 'S') ini = 2;
		else if(face == 'W') ini = 3;
		char dir[] = {'N', 'E', 'S', 'W'};
		bool lost = false;
		for(int i = 0; i < (int)ins.size(); i++){
			if(ins[i] == 'F'){
				if(cur_dir == 'N') cur_y = cur_y + 1;
				else if(cur_dir == 'S') cur_y = cur_y - 1;
				else if(cur_dir == 'E') cur_x = cur_x + 1;
				else if(cur_dir == 'W') cur_x = cur_x - 1;
			}
			else if(ins[i] == 'R'){
				cur_dir = dir[(ini+1)%4];
				ini = (ini+1)%4;
			}
			else if(ins[i] == 'L'){
				cur_dir = dir[(ini+3)%4];
				ini = (ini+3)%4;
			}
			if(((cur_x > max_x || cur_y > max_y) || (cur_x < min_x || cur_y < min_y)) && map[cur_x][cur_y] != 1){
				map[cur_x][cur_y] = 1;
				if(cur_dir == 'N') cur_y = cur_y - 1;
				else if(cur_dir == 'S') cur_y = cur_y + 1;
				else if(cur_dir == 'E') cur_x = cur_x - 1;
				else if(cur_dir == 'W') cur_x = cur_x + 1;
				lost = true;
				break;
			}
			else if(map[cur_x][cur_y] == 1){
				if(cur_dir == 'N') cur_y = cur_y - 1;
				else if(cur_dir == 'S') cur_y = cur_y + 1;
				else if(cur_dir == 'E') cur_x = cur_x - 1;
				else if(cur_dir == 'W') cur_x = cur_x + 1;
			}
		}
		cout << cur_x << " " << cur_y << " " << cur_dir;
		if(lost == true) cout << " LOST";
		cout << endl;
	}
	return 0;
}