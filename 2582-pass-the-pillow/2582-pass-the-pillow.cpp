class Solution {
public:
    int passThePillow(int n, int time) {
        
        int rounds = time/(n-1);
        int remHopsToCover=time%(n-1);
        int ans = 0;
        if(rounds%2 == 0){
            ans = (1+remHopsToCover);
        }else{
            ans = (n-remHopsToCover);
        }
        
        return ans;
    }
};