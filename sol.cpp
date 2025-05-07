class Solution {
    public:
        bool isPerfectSquare(int num) {
        // first we apply the brute force solution 
    
    
        // float ans = sqrt(num);
    
    
        // int p = (int)ans;
    
        // if(p == ans) return true;
    
        // return false;
    
    
        
        // now the optimal solution.
    
    
        long long left = 1;
        long long right = num;
    
    
        long long mid;
    
    
        while(left<=right){
          
          mid = left + (right - left)/2;
    
          long long sq = mid * mid;
    
          if(sq == num) return true;  // for cheching the perfect square.
    
         else if(sq<num){
    
            left = mid + 1;
         }
    
         else{
            right = mid - 1;
         }
    
    
        }
    
    
    
         return false;
    
        }
    };