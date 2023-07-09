class Solution {
    public void merge(int[] arr1, int n, int[] arr2, int m) {
        int arr3[]=new int[m+n+1]; 
        int i,j,k;
        i=j=k=0;
        
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                arr3[k]=arr1[i];
                k++;i++;
            }
            else{
                arr3[k]=arr2[j];
                k++;j++;
            }
        }
        for(;i<n;i++){
            arr3[k++]=arr1[i];
        }
        for(;j<m;j++){
            arr3[k++]=arr2[j];
        }
        
        for(int p=0;p<(n+m);p++){
            arr1[p]=arr3[p];
        }
        
    }
}