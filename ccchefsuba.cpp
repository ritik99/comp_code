#include<iostream>
#include<tuple>
#include<vector>
#include<algorithm>
#include<deque>

using namespace std;
int main(){
    int n, p, k;
    cin >> n >> k >> p;
    deque<int> arr;
    int temp;
    char req[p];
    vector<int> list;
    for(int i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    for(int w = 0; w < p; w++){
        cin >> req[w];
    }
    
    for(int t = 0; t < p; t++){
    	if(k<n){

	        if(req[t] == '!'){
	            int tem = arr[n-1];
	            arr.pop_back();
	            arr.push_front(tem);
	        }
	        else if(req[t] == '?'){
	            int length = 0;
	            for(int q = 0; q < n; q++){
	                if(arr[q] == 1){
	                    length = 0;
	                    while(arr[q] == 1 && q < n){
	                        q++;
	                        length++;
	                     }
	                    list.push_back(length);
	                }
	            }
	            
	            sort(list.begin(), list.end());
	            for(int i = list.size() - 1; i >= 0; i--){
                    if(list[i] <= k){
                        cout << list[i] << endl;
                        break;
                    }
                }
	        }
	    }
	    else{
	    	int length = 0;
	            for(int q = 0; q < n; q++){
	                if(arr[q] == 1){
	                    length = 0;
	                    while(arr[q] == 1 && q < n){
	                        q++;
	                        length++;
	                     }
	                    list.push_back(length);
	                }
	            }
	            
	            sort(list.begin(), list.end());
	        if(req[t] == '?'){
	        	for(int i = list.size() - 1; i >= 0; i--){
                    if(list[i] <= k){
                        cout << list[i] << endl;
                        break;
                    }
                }
	        }

	    }
    }
    return 0;
}
