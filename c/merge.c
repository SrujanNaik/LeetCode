#include <stdio.h>
#include <string.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
	int i = 0, j = 0;
	int temp[nums1Size];
	memset(temp, 0, sizeof(temp));
	int k = 0;
	
	while(i < m && j < n){
		if (nums1[i] == nums2[j]){
			temp[k++] = nums1[i];
			temp[k++] = nums2[j];
			i++;
			j++;
		}
		else if(nums1[i] < nums2[j]){
			temp[k++] = nums1[i];
			i++;
		}
		else if(nums2[j] < nums1[i]){
			temp[k++] = nums2[j];
			j++;
		}
	}

	if(i < m){
		for(int x = i; x < m; x++){
			temp[k++] = nums1[x];
		}
	}
	if(j < n){
		for(int x = j; x < n; x++){
			temp[k++] = nums2[x];
		}
	}

	k = 0;
	for(int i = 0; i < nums1Size; i++){
		nums1[i] = temp[i];
		printf("%d ", temp[i]);
	}
}

int main(){
	int nums1[] = {1,2,3,0,0,0};
	int nums1Size = sizeof(nums1)/sizeof(nums1[0]);
	int m = 3;

	int nums2[] = {2,5,6};
	int nums2Size = sizeof(nums2)/sizeof(nums2[0]);
	int n = 3;

	merge(nums1, nums1Size, m, nums2, nums2Size, n);

	for(int i = 0; i < nums1Size; i++){
		printf("%d ", nums1[i]);
	}

	return 0;
}
