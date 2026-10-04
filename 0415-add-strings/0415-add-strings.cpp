class Solution {
public:
    string addStrings(string num1, string num2) {

        int i = num1.size() - 1;
        int j = num2.size() - 1;

        string s = "";
        int carry = 0;

        while(i >= 0 || j >= 0)
        {
            int a = 0;
            int b = 0;

            if(i >= 0)
                a = num1[i] - '0';

            if(j >= 0)
                b = num2[j] - '0';

            int sum = a + b + carry;

            int rem = sum % 10;
            carry = sum / 10;

            s.insert(0, to_string(rem));

            i--;
            j--;
        }

        if(carry > 0)
            s.insert(0, to_string(carry));

        return s;
    }
};