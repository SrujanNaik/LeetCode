#include<stdio.h>

int longestMountain(int *arr,int arrSize){
	int max = 0;
	for(int i = 1;i < arrSize;i++){
		if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
			int left = i-1;
			int right = i+1;

			while(left > 0 && arr[left-1] < arr[left]) left--;
			while(right < arrSize && arr[right] > arr[right + 1])right++;

			int temp = right-left+1;
			max = (max > temp)?max:temp;
		}

	}

	return max;
}

int main(){
	int arrSize = 7;
	int arr[] = {2,1,4,7,3,2,5};

	printf("%d",longestMountain(arr,arrSize));

	return 0;
}
