#include <iostream>

using namespace std;

int main()
{
    int n, h, m, h0, m0, c(1), cash(1);
    cin >> n;
    cin >> h0 >> m0;

    while (--n)
    {
        cin >> h >> m;;
        if (h == h0 && m == m0)
        {
            c += 1;
            if (c > cash)
            {
                cash = c;
            }
        }
        else
        {
            c = 1;
        }
        h0 = h;
        m0 = m;
    }
    cout << cash << endl;
    return 0;
}
