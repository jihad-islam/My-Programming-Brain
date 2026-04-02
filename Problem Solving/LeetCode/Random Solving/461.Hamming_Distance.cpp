/*
    eta bitwise and diyew kora jay.
    bitwise and er code: 

int count = 0;

while(ans > 0) {
    count += (ans & 1);  // last bit check
    ans = ans >> 1;      // right shift
}
*/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = x ^ y;

        int count = 0;
        while (ans != 0) {
            if (ans % 2 == 1)
                count++;
            ans = ans / 2;
        }
        return count;
    }
};