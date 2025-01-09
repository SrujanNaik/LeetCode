#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int prefixCount(char** words, int wordsSize, char* pref) {
    int preflen = strlen(pref);
    int count = 0, max = 0;
    for(int i = 0;i < wordsSize;i++){
        int word_len = strlen(words[i]);
        if(word_len < preflen){
            continue;
        }
        for(int j = 0;j < preflen;j++){
            if(pref[j] != words[i][j]){
                break;
            }
            max++;
        }
        if(max > preflen-1){
            count++;
        }
        max = 0;
    }
    return count;
}

int main(){
	char *words[] = {"pay","attention","practice","attend"};
	int wordsSize = sizeof(words) / sizeof(words[0]);
	char pref[] = "at";

	printf("%d", prefixCount(words, wordsSize, pref));

	return 0;
}

