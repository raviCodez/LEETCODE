class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;  // Handling overflow case
        }

        bool negative = (dividend < 0) ^ (divisor < 0);  // Determine if the result is negative

        // Convert dividend and divisor to their absolute values
        long long absDividend = labs(dividend);
        long long absDivisor = labs(divisor);

        long long quotient = 0;

        // While the dividend is greater than or equal to the divisor
        while (absDividend >= absDivisor) {
            long long tempDivisor = absDivisor, multiple = 1;

            // Keep doubling the divisor until it's larger than the dividend
            while (absDividend >= (tempDivisor << 1)) {
                tempDivisor <<= 1;  // Double the divisor
                multiple <<= 1;     // Track how many times we can subtract it
            }

            // Subtract the largest divisor chunk and increase the quotient
            absDividend -= tempDivisor;
            quotient += multiple;
        }

        // Apply the correct sign to the quotient
        if (negative) quotient = -quotient;

        // Ensure the quotient fits within 32-bit integer range
        if (quotient > INT_MAX) return INT_MAX;
        if (quotient < INT_MIN) return INT_MIN;

        return quotient;
    }
};
