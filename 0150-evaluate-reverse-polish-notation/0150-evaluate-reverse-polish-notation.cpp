class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(auto i:tokens){
            if(s.empty()){
                s.push(stoi(i));
            }else if(i=="+"){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(a+b);
                cout<<a<<" "<<i<<" "<<b<<endl;
            }else if(i=="-"){
                 int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(b-a);
                cout<<a<<" "<<i<<" "<<b<<endl;
            }else if(i=="*"){
                 int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(a*b);
                cout<<a<<" "<<i<<" "<<b<<endl;
            }else if(i=="/"){
                 int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(b/a);
                cout<<a<<" "<<i<<" "<<b<<endl;
            }else{
                s.push(stoi(i));
                cout<<i<<endl;
            }
        }
        return s.top();
    }
};