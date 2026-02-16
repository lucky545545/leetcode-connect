class Solution {
public:
    int reverseBits(int n) {
        string bin = bitset<32>(n).to_string();
        reverse(bin.begin() , bin.end());
        int decimal = stoi(bin, nullptr, 2);
        return decimal;


        
    }
};