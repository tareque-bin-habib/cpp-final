#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string t1, t2;
        cin >> t1 >> t2;
        while (t1.find(t2) != -1)
        {
            t1.replace(t1.find(t2), t2.size(), "$");
        }
        cout << t1 << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;

        for (int pos = s1.find(s2); pos != -1; pos = s1.find(s2))
        {
            s1.replace(pos, s2.size(), "$");
        }

        cout << s1 << endl;
    }
    return 0;
}