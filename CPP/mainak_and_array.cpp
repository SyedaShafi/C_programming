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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = INT_MIN;
        ans = max(a[n - 1] - a[0], ans);
        for (int i = 1; i < n; i++)
        {
            ans = max(a[i - 1] - a[i], ans);
        }

        for (int i = 1; i < n; i++)
            ans = max(ans, a[i] - a[0]);
        for (int i = 0; i < n - 1; i++)
            ans = max(ans, a[n - 1] - a[i]);
        cout << ans << endl;
    }
}