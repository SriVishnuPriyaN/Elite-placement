void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int res = m + n;    
    int j=0;         
    for(int i = m; i < res; i++){
        nums1[i] = nums2[j];
        j++;
    }
    for(int i=0;i<res;i++){
        for(int j=i+1;j<res;j++){
            if(nums1[i]>nums1[j]){
                int temp=nums1[i];
                nums1[i]=nums1[j];
                nums1[j]=temp;
            }
        }
    }
}
