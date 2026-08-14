class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0)
            return 0;
        if(x == 1)
            return 1;
        
        double res = 1;

        long long pow = n;

        if(pow<0)
        {
            x = 1/x;
            pow = -pow;
        }

        while(pow >0)
        {
            if(pow % 2 == 1)
            {
                res *= x;
            }
            x*=x;
            pow /=2;
        }

        return res;
    }
};
