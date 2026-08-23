class Solution {
public:
    bool sumGame(string num) {
        int n=num.length();
        int q1=0,q2=0;
        int s1=0,s2=0;
        int h=n/2;
        for(int i=0;i<n;i++){
            if(num[i]=='?'){
            (i<h) ? q1++ : q2++;
            } else {
                (i<h) ? s1+=(num[i]-'0') : s2+=(num[i]-'0');
            }
        }
        if((q1+q2)%2!=0)
            return true;
        return (2*s1+9*q1)!=(2*s2+9*q2);
    }
};