#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], i, dist_num = 1;
        for (i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        for (i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
                dist_num++;
        }

        cout << n - dist_num << endl;
    }
}