#include<iostream>

int minChanges(std::string);

int main(){
	std::string s = "1001";

	std::cout<<minChanges(s)<<std::endl;

	return 0;
}

int minChanges(std::string s){
	int S_s = s.size();
	int count = 0;
	for(int i = 0;i < S_s;i+=2){
		if(s[i] != s[i+1]){
			count++;
		}
	}

	return count;
}
