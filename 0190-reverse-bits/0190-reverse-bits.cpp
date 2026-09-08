class Solution {
public:
    int reverseBits(int n) {
        string bin = "";
        while (n != 0) {
            int rem = n % 2;
            bin += rem + '0';
            n = n / 2;
        }
        while (bin.length() < 32) {
            bin += '0';}
        unsigned int d = 0;
        for (int i = 0; i < bin.length(); i++) {
            d = d * 2 + (bin[i] - '0');
        }
        return d;
    }
};