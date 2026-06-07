class Solution {
public:
    int reverse(int x) {
        int r,a=0,temp=x,power=0;
        while(x!=0){
          power++;
          x=x/10;
        }
        while(temp!=0){
          r=temp%10;
          if(a+r*pow(10,power-1)>INT_MAX || a+r*pow(10,power-1) < INT_MIN ){
            return 0;
          }
          a=a+r*pow(10,power-1);
          power--;
          temp/=10;
        }
        return a;
    }
};