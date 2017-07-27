#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main(){
	int r, h, l;
	std::deque<int> right;
	std::deque <int> height;
	std::deque <int> left;
	while(!cin.eof()){
		cin >> l >> h >> r;
		left.push_back(l);
		right.push_back(r);
		height.push_back(h);
	}
	deque<int> hfinal;
	for(int i = 0; i < max(right.begin(), right.end()); i++){
		hfinal[i] = 0;
	}
	bool lflag = false;
	bool rflag = false;
	for(int i = 0; i < right.size(); i++){
		for(int l = left[i]; l < right[i]; i++){
			if(height[i] > hfinal[l] && lflag != ){
				arr.push_back()

			}

		}
	}