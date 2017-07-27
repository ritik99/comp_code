#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	unsigned long int h = 0;
	unsigned long int w = 0;
	while(scanf("%lu %lu", &h, &w) && w != -1 && h != -1){
		int n;
		scanf("%d", &n);
		unsigned long int x[n];
		unsigned long int y[n];
		unsigned long int r[n];
		for(int i = 0; i < n; i++){
			scanf("%lu %lu %lu", &x[i], &y[i], &r[i]);
		}
		//vector<int> count;
		//int x = 1;
		int ans = 0;
		for(int z = 1; z <= h; z++){
			int c = 0;
			for(int i = 0; i < n; i++){
				int dist = z - y[i];
				if(abs(dist) <= r[i]) c++;
			}
			if(c > ans) ans = c;
		}
		printf("%d\n", ans);
	}
	return 0;

}