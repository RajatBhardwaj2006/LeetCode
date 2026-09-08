class Solution {
public:
    int countCommas(int n) {
        int count = n;
        int len = 0;
        int comma = 0;
        while(count != 0){
            count /= 10;
            len++;
        }
        if(len <= 3){
            return 0;
        }else{
            for(int i=0; i<=n; i++){
                if(i >= 1000){
                    comma++;
                }
            }
        }
        return comma;
    }
};