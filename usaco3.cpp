/*
ID: ritik.d1
LANG: C++
TASK: transform
*/
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream fin ("transform.in");
	ofstream fout ("transform.out");
	int n;
	fin >> n;
	char tile[n][n];
	char tile1[n][n];
	char tile2[n][n];
	char tile3[n][n];
	char tile4[n][n];
	char tile5[n][n];
	char tile6[n][n];
	char tile7[n][n];
	int numb = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			fin >> tile[i][j];
			tile1[j][n-1-i] = tile[i][j];
			tile2[n-1-i][n-1-j] = tile[i][j];
			tile3[n-1-j][i] = tile[i][j];
			tile4[i][n-1-j] = tile[i][j];
		}
	}
	char res[n][n];
	for(int k = 0; k < n; k++){
		for(int x = 0; x < n; x++){
			fin >> res[k][x];
		}
	}
	bool flag = true;
	numb = 1;
	for(int h = 0; h < n; h++){
		for(int j = 0; j < n; j++){
			if(res[h][j] != tile1[h][j]){
				flag = false;
				break;
			}

		}
	}

	if(flag == false){
		numb = 2;
		flag = true;
		for(int h = 0; h < n; h++){
			for(int j = 0; j < n; j++){
				if(res[h][j] != tile2[h][j]){
					flag = false;
					break;
				}

			}
		}
	}
	if(flag == false){
		numb = 3;
		flag = true;
		for(int h = 0; h < n; h++){
			for(int j = 0; j < n; j++){
				if(res[h][j] != tile3[h][j]){
					flag = false;
					break;
				}

			}
		}
	}
	if(flag == false){
		numb = 4;
		flag = true;
		for(int h = 0; h < n; h++){
			for(int j = 0; j < n; j++){
				if(res[h][j] != tile4[h][j]){
					flag = false;
					break;
				}

			}
		}
	}
	if(flag == false){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				tile5[j][n-1-i] = tile4[i][j];
				tile6[n-1-i][n-1-j] = tile4[i][j];
				tile7[n-1-j][i] = tile4[i][j];
				//tile4[i][n-1-j] = tile[i][j];
			}
		}
		if(flag == false){
			numb = 5;
			flag = true;
			for(int h = 0; h < n; h++){
				for(int j = 0; j < n; j++){
					if(res[h][j] != tile5[h][j]){
						flag = false;
						break;
					}

				}
			}
		}
		if(flag == false){
			flag = true;
			numb = 5;
			for(int h = 0; h < n; h++){
				for(int j = 0; j < n; j++){
					if(res[h][j] != tile6[h][j]){
						flag = false;
						break;
					}

				}
			}
		}
		if(flag == false){
			flag = true;
			numb = 5;
			for(int h = 0; h < n; h++){
				for(int j = 0; j < n; j++){
					if(res[h][j] != tile7[h][j]){
						flag = false;
						break;
					}

				}
			}
		}
		if(flag == false){
			numb = 6;
			flag = true;
			for(int h = 0; h < n; h++){
				for(int j = 0; j < n; j++){
					if(res[h][j] != tile[h][j]){
						flag = false;
						break;
					}

				}
			}
		}

	}
	if(flag == false) numb = 7;
	fout << numb << endl;
	return 0;

}