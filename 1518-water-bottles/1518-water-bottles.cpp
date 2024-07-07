class Solution {
public:
    int numWaterBottles(int b, int e) {
        int ans=0;
        ans+=b;
        while(b>=e)
        {
            int y=b%e;
            b=b/e;
            

            ans+=b;
            b+=y;
        }
    return ans;
    }
};