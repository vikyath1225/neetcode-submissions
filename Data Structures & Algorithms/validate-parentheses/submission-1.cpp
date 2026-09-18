class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> check{
            { '}','{'},
            {']','['},
            {')','('}
        };
        stack <char> properstack;
    for ( char x : s){
        if(check.count(x)){
            if(!properstack.empty() && properstack.top() == check[x]){
                   properstack.pop();
                }else return false;
                }
                else properstack.push(x);   
        }
       return properstack.empty();
    }
};
