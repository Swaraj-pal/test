#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int check[3] = {0};
        string s;
        getline(cin, s);
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] >= 48 && s[j] <= 57)
                check[0]++;
            else if (s[j] >= 65 && s[j] <= 90)
                check[1]++;
            else if (s[j] >= 97 && s[j] <= 122)
                check[2]++;
        }
        if (check[0] > 0 && check[1] > 0 && check[2] > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
    return 0;
}