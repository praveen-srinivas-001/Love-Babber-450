public class Solution {
    public static long getTrappedWater(long []arr, int n) {
        long lmax,rmax;
        long trappedWater = 0;
        int right=arr.length-1, left=0;
        
        lmax=arr[left];
        rmax = arr[right];
        while(left < right){
            if(lmax < rmax){
                trappedWater += lmax-arr[left++];
                lmax = Math.max(arr[left],lmax);
            }
            else{
                trappedWater += rmax-arr[right--];
                rmax = Math.max(arr[right],rmax);
            }
        }
        return trappedWater;
    }
}