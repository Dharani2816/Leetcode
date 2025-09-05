bool isPalindrome(int x) {
    if(x>=0){
    int temp = x,a,d=0;
    while(x!=0){
        a=x%10;
        x=x/10;
        d++;
    }
    int temp1=temp,b=0;
    while(temp!=0){
b+=temp%10*pow(10,d-1);
temp=temp/10;
d--;
    }
    if(temp1==b) return 1;
    else return 0;
    }
    else return 0;
}