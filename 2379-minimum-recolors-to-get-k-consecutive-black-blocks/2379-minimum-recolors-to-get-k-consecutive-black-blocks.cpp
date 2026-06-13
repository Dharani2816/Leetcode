class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int recolors = INT_MAX;
        int n = blocks.size();
        int left = 0, right = 0;
        int whites = 0;

        while (right < n) {
            while (right - left + 1 < k) {
                if (blocks[right] == 'W') {
                    whites++;
                }
                right++;
            }
            if(blocks[right] == 'W') whites++;
            if (right - left + 1 == k) {
                recolors = min(recolors, whites);
                cout<<left<<" "<<right<<endl;
                if (left < n && blocks[left] == 'W')
                    whites--;
                left++;
                right++;
            }
        }
        return recolors;
    }
};