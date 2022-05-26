class Solution {
public:
    int hammingWeight(uint32_t n) {
        // Kernighan algo
        long long int num=n, count=0;
        while(num!=0){
            num=num&(num-1);
            count++;
        }
        return count;
    }
};