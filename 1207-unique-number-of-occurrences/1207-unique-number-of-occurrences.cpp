class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        unordered_set<int>a;
        int mapSize = 0;
        for(auto it = freq.begin();it!=freq.end();it++){
            a.insert(it->second);
            cout<<it->second<<endl;
            mapSize++;
        }
        int setSize = 0;
        for(auto it = a.begin();it!=a.end();it++){
            setSize++;
        }
        if(mapSize == setSize){
            return true;
        }
        else{
            return false;
        }
    }
};