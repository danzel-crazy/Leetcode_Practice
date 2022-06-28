class Solution {
public:
    string addStrings(string num1, string num2) {
        string final = "";
        int len1 = num1.size();
        int len2 = num2.size();
        int i = len1 - 1;
        int j = len2 - 1;
        
        int count = 0;
        while(i >= 0 || j >=0){
            int a;
            if(i >= 0){
                a = num1[i--] - '0';
            }
            else{
                a = 0;
            }
            int b;
            if(j >= 0){
                b = num2[j--] - '0';
            }
            else{
                b = 0;
            }
            
            int sum = a + b + count;
            cout << sum << endl;
            final.insert(final.begin(), sum % 10 + '0');
            count = sum / 10;
        }
        
        return count? '1' + final : final;
       
    }
};
