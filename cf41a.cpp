#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
string s;
string rs;
cin >> s;
cin >> rs;
bool flag = true;
int len = (int)s.size();
for(int i = 0; i < len; i++){
	if(s[i] != rs[len - 1 - i]){
		flag = false;
		break;
	}
}
if(flag == true) cout << "YES" << endl;
else cout << "NO" << endl;
return 0;
}
		


