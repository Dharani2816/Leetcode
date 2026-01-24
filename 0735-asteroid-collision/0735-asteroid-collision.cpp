class Solution {
public:
    bool cangetHit(int prev,int curr){
        if(prev > 0 && curr < 0){
            return true;
        }
        else{
            return false;
        }
    }
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        bool canPush;
        for(int i=0;i<asteroids.size();i++){
            canPush = true;
            while(!s.empty() && cangetHit(s.top(),asteroids[i])){
                int num1 = abs(s.top());
                int num2 = abs(asteroids[i]);
                if(num1 == num2){
                    s.pop();
                    canPush = false;
                    break;
                }
                else{
                    if(num1 < num2){
                        s.pop();
                        canPush = true;
                    }
                    else{
                        canPush = false;
                        break;
                    }
                }
            }
            if(canPush)
                s.push(asteroids[i]);   
        }
        vector<int>res;
        while(!s.empty()){
            res.push_back(s.top());
            s.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};