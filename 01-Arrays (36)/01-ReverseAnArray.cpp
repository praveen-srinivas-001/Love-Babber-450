void reverseArray(vector<int> &arr , int m) {
    int l = m+1;
    int r = arr.size()-1;
    while(l < r){
        arr[l] += arr[r];
        arr[r] = arr[l]-arr[r];
        arr[l] = arr[l]-arr[r];
        l++;r--;
    }
}