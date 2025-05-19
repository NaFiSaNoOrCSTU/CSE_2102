#include <bits/stdc++.h>
using namespace std;
int Postfix(string s)
{
    stack<int> st;
    stringstream ss(s);
    string s1;
    while (ss >> s1)
    {
        if(!isdigit(s1[0]))
        {
            int top1 = st.top();
            st.pop();
            int top2 = st.top();
            st.pop();
            int ans;
            if (s1 == "+")
                ans = top2 + top1;
            else if (s1 == "-")
                ans = top2 - top1;
            else if (s1 == "*")
                ans = top2 * top1;
            else if (s1 == "/")
                ans = top2 / top1;
            else if (s1 == "^")
                ans = pow(top2, top1);
            st.push(ans);
        }
        else
        {
            int num = stoi(s1);
            st.push(num);
        }
    }
    return st.top();
}
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    string p;
    cout << "Enter postfix expression: ";
    getline(cin, p);
    int ans = Postfix(p);
    cout << "Value: " << ans << endl;
    return 0;
}
