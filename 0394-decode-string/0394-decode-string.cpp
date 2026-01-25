class Solution {
public:
    string decodeString(string s) {
        stack<string>a;
        string number = "";
        for(int i=0;i<s.size();i++){
            string d = "";
            if(isdigit(s[i])){
                number+=s[i];
            }
            else{
                d+=s[i];
            }
            if(d == "]"){
                string b = "";
                while(!a.empty() && a.top() != "["){
                    b+=a.top();
                    a.pop();
                }
               // reverse(b.begin(),b.end());
                a.pop();
                int k = stoi(a.top());
                a.pop();
                string c = "";
                for(int i=0;i<k;i++){
                    c+=b;
                }
                a.push(c);
              //  cout<<b<<endl;
            }
            if(d == "["){
                a.push(number);
                cout<<number<<" pushed.."<<endl;
                number="";
            }
            if(!isdigit(s[i]) && s[i]!=']'){
                a.push(d);
                cout<<d<<" pushed"<<endl;
            }
            // if(!a.empty())
            // cout<<a.top()<<endl;
        }
        string res = "";
        while(!a.empty()){
            res+=a.top();
            a.pop();
        }
        cout<<res<<endl;
        reverse(res.begin(),res.end());
        return res;
    }
};