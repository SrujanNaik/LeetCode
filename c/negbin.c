#include<stdio.h>
#include<stdlib.h>

int* addNegabinary(int* arr1,int arr1Size,int *arr2,int arr2Size,int *returnSize){
	int maxlen = (arr1Size>arr2Size)?arr1Size:arr2Size;
    	int i = arr1Size - 1;
    	int j = arr2Size - 1;
	int *result = (int*)malloc((maxlen+2) * sizeof(int));
    	int carry = 0,k = 0;

	while(carry!=0 || i >= 0 || j >= 0){
		int sum = carry;
		if(i >= 0) sum += arr1[i--];
		if(j >= 0) sum += arr2[j--];

		result[k++] = sum & 1;
		carry = -(sum >> 1);
	}

	while(k > 1 && result[k - 1] == 0){
		k--;
	}

	for(int x = 0,y = k - 1;x < y;x++,y--){
		int temp = result[x];
		result[x] = result[y];
		result[y] = temp;
	}

	*returnSize = k;
	return result;
}

int main(){
	int arr1[] = {1};
	int arr2[] = {0};
	int arr1Size = sizeof(arr1)/sizeof(int);
	int arr2Size = sizeof(arr2)/sizeof(int);
	int returnSize;

	int *result = addNegabinary(arr1,arr1Size,arr2,arr2Size,&returnSize);

	for(int i = 0;i < returnSize;i++){
		printf("%d ",result[i]);
	}
	free(result);
	return 0;
}

