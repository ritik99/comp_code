/*#include<iostream>
#include<string>

using namespace std;

bool func(string a, string b){
	if((int)a.length()%2 == 1 || (int)b.length()%2 == 1){
		if(a==b) return true;
		else return false;
	}
	else{
		int alen = (int)a.length();
		int blen = (int)b.length();
		if(a == b) return true;
		else{
			return ((func(a.substr(0, alen/2), b.substr(0, blen/2)) && func(a.substr(alen/2, alen/2), b.substr(blen/2, blen/2)) )|| (func(a.substr(0, alen/2), b.substr(blen/2, blen/2)) && func(a.substr(alen/2, alen/2), b.substr(0, blen/2))));
		}
	}
}

int main(){
	string a, b;
	cin >> a;
	cin >> b;
	if(func(a, b) == true) cout << "YES";
	else cout << "NO";
	return 0;
}*/
#include <cstdio>
#include <iostream>
#include <string>

std::string binarySort(std::string s){

    long n = s.size();
    if(n % 2){return s;}
    
    std::string left =  binarySort(s.substr(0, n / 2));
    std::string right = binarySort(s.substr(n/2, n / 2));
    return left < right ? (left + right) : (right + left);
}


int main(){

    std::string s1, s2; 
    getline(std::cin, s1); 
    getline(std::cin, s2);
    puts(binarySort(s1) == binarySort(s2) ? "YES" : "NO");

    return 0;
}