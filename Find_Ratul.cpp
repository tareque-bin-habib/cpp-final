#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s); // spcae
    string target;
    int i = 0;
    while (ss >> target)
    {
        if (target == "Ratul")
        {
            i++;
        }
    }
    if (i > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string target;
    int found = 0;

    while (ss >> target)
    {
        if (target == "Ratul")
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}