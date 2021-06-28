#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of string: ";
    cin >> n;
    vector<int> ans;
    int temp = 0;
    cout << "Enter the string: ";
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        ans.push_back(temp);
    }

    vector<int> v;
    v.push_back(1);
    stack<int> s;
    s.push(0);

    for (int i = 1; i < n; i++)
    {
        if (s.size() == 0)
        {
            v.push_back(1);
        }
        else if (s.size() > 0 && ans[s.top()] > ans[i])
        {
            v.push_back(i - s.top());
        }
        else if (s.size() > 0 && ans[s.top()] <= ans[i])
        {
            while (s.size() > 0 && ans[s.top()] <= ans[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                v.push_back(i+1);
            }
            else
            {
                v.push_back(i - s.top());
            }
        }
        s.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}