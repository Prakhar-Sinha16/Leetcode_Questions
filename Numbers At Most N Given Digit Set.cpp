Output Status: 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Numbers At Most N Given Digit Set.
Memory Usage: 8.3 MB, less than 21.65% of C++ online submissions for Numbers At Most N Given Digit Set.

class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
        string upperLimit = to_string(n);
        int digit = upperLimit.size() , digitsize = digits.size() , result = 0;
        
        //Scenerio 1: where the number of digit is less than the upperlimit
        for(int i=1;i<digit;++i) result += pow(digitsize,i);
        
        //Scenerio 2:Where the number of digits are same as upperLimit
        for(int i=0;i<digit;++i){
            //if the number starts with same number i.e if the number starts with a digit which is present in our input array 'digits'
            bool startingSameNum = false;
            for(string &d :digits){
                if(d[0] < upperLimit[i]) result += pow(digitsize,digit -i - 1);
                else if (d[0]==upperLimit[i]) startingSameNum=true;
            }
            if(!startingSameNum) return result;
        }
        
        return result+1;
    }
};
