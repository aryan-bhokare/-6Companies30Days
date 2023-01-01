//https://leetcode.com/problems/evaluate-reverse-polish-notation/
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto& i:tokens)
            if (i=="+"||i=="-"||i=="*"||i=="/")
            {
                long long a1=s.top();s.pop();
                long long a2=s.top();s.pop();
                    if(i=="+")  a1=a2+a1;
                    if(i=="-")  a1=a2-a1;
                    if(i=="*")  a1=a2*a1;
                    if(i=="/")  a1=a2/a1;
                s.push(a1);
            }
            else s.push(stoi(i));         
        return s.top();
    }
};
