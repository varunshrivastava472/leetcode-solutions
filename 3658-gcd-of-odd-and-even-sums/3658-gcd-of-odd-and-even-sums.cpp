class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        long long sumodd = 0;
        long long sumeven = 0;

        int odd = 1;
        int even = 2;

        while (n > 0) {
            sumodd += odd;
            sumeven += even;

            odd += 2;
            even += 2;

            n--;
        }

        int m = 0;
        int mini = min(sumodd, sumeven);

        int i = 1;
        while (i <= mini) {
            if (sumodd % i == 0 && sumeven % i == 0) {
                m = i;
            }
            i++;
        }

        return m;
    }
};