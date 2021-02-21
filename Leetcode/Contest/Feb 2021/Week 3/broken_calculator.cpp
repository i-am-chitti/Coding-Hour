class Solution {
public:
    int brokenCalc(int X, int Y) {
        if(X>Y) return X-Y;
        else if(X==Y) return 0;
        if(X<Y && Y%2==0) return 1+brokenCalc(X,Y/2);
        return 1+brokenCalc(X,Y+1);
    }
};