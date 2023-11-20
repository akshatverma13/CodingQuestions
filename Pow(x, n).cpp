class Solution {
public:
    double p(double x, int n ){

       if(n == 1){
           return x; 
       }
       if(n == 0){
           return 1; 
       }

       double h = p(x, n/2);

       if(n&1){
           return h * h * x; 
       }
       else{
           return h * h ; 
       }

    }
    double myPow(double x, int n) {

       if(n < 0) return (1/p(x,n));
       else return p(x,n);
    }
};
