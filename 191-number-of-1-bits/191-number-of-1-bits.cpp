class Solution {
public:
    int hammingWeight(uint32_t n) {
        // Kernighan algo
        long long int num=n, count=0;
        while(num!=0){
            long long int mask=num&(-num);
            num=num-mask;
            count++;
        }
        return count;
    }
};