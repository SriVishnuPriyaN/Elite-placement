int removeElement(int* nums, int numsSize, int val) {
	int count=0;
	for(int i=0; i<numsSize; i++) {
		for(int j=i+1; j<numsSize; j++) {
			if(nums[i]==val) {
				int temp=nums[i];
				nums[i]=nums[j];
				nums[j]=temp;
			}
		}
	}
	for(int i=0;i<numsSize;i++){
	    if(nums[i]==val) count++;
	}
	numsSize=numsSize-count;
	return numsSize;
}