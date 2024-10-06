class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int key) {
    vector<int> result;
    int ans =-1;
    int s= 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
       if(arr[mid] == key){
         ans = mid;
         e = mid -1;
       }
      else if(arr[mid] < key){
        s = mid+1;
       }
       else{
        e = mid -1;
       }
       mid = s + (e-s)/2;
    }
   result.push_back(ans);
   int lastocc =-1;
     s= 0;
     e= arr.size()-1;
     mid = s + (e-s)/2;
    while (s<=e)
    {
       if(arr[mid] == key){
         lastocc = mid;
         s = mid +1;
       }
      else if(arr[mid] < key){
        s = mid+1;
       }
       else{
        e = mid -1;
       }
       mid = s + (e-s)/2;
    }
   result.push_back(lastocc);
   return result;
    }
};