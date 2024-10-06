class Solution {
public:
    string intToRoman(int num) {
        // Step 1: Define a mapping of values to Roman numeral symbols
        vector<pair<int, string>> roman = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };
        
        // Step 2: Initialize an empty result string
        string result = "";
        
        // Step 3: Iterate over the value-symbol pairs
        for (const auto& [value, symbol] : roman) {
            // While the current value can be subtracted from num
            while (num >= value) {
                // Subtract the value from num
                num -= value;
                // Append the corresponding Roman numeral symbol to the result
                result += symbol;
            }
        }
        
        // Step 4: Return the resulting Roman numeral string
        return result;
    }
};
