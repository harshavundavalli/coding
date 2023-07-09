class Solution {

    
    public int[] searchRange(int[] nums, int target) {
        int A[]={-1,-1};
        int n=nums.length;
        int i,j;
        i=j=-1;
        if(n==1 && target==nums[0]) return new int[]{0,0};
        if(n>1){
            int x= binarySearch(nums,0,n-1,target);
            
            i=j=x;
            if(i==0) A[0]=0;
            else{
                while( i>=1 && nums[i-1]==target ){
                    i--;
                }
            }
            
            
            while(j<n-1 && nums[j+1]==target){
                j++;
            }
            
        }
        A[0]=i;
        A[1]=j;
        return A;

    }
    public static int binarySearch(int arr[], int first, int last, int key){  
        int mid = (first + last)/2;  
        while( first <= last ){  
            if ( arr[mid] < key ){  
                first = mid + 1;     
            }else if ( arr[mid] == key ){  
                return mid;  
            }else{  
                last = mid - 1;  
            }  
            mid = (first + last)/2;  
        }  
        if ( first > last ){  
            return -1;  
        } 
        return mid;
    }
}