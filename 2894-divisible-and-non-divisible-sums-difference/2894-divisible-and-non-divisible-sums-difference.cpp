class Solution {
public:
    int differenceOfSums(int n, int m) {
        int divi=0;
        int nondivi=0;
        for(int i=1;i<=n;i++){
            if(i%m==0)
               divi+=i;
            else
              nondivi+=i;
        }
        return (nondivi-divi);
    }
};