#include<stdio.h>

int main(){
	int n = 30;
	int table[n];
	table[0] = 0;
	table[1] = 1;
	int sol = 1;

	for(int i = 2;i <=n ;i++){
		table[i] = table[i-1] + table[i-2];
		sol = table[i];
	}
	printf("%d",sol);

	return 0;
}
