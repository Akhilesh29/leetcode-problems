class Solution {
public:
    char findKthBit(int n, int k) {
        // This is the base Case
        if(n==1 && k==1)
            return '0';
        
        int mid=(1<<(n-1));   
        
        // If our k is equal to mid 
        if(k==mid)
            return '1';
        
        // if our k<mid
        
        if(k<mid)
            return findKthBit(n-1,k);
        
        
        if(findKthBit(n-1,mid*2-k)=='0')
            return '1';
        else
            return '0';
    }
};