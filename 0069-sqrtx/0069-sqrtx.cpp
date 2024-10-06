class Solution {
public:
    int mySqrt(int x) {
        if (x==0) return 0;
        int left=1,right=x,ans=0;
       while(left<=right){
           long long mid=left+(right-left)/2;
           if (x==mid*mid){
               return mid;
           }
           else if (mid*mid<x){
               ans=mid;
               left=mid+1;
           }
           else{
               right=mid-1;
           }
       }
        return ans;
        
    }
};