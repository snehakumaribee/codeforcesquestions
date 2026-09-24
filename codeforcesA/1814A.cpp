// if n is even yes, n>2k yes, (n<2k && n%k= odd no unneccessary) // actually take example n = 11 k =4 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        int yes = 0;
        if (n == k)
        {
            yes = 1;
        }
        else if (n % 2 == 0)
        {
            yes = 1;
        }
        else if (n > k && k % 2 == 1)
        {
            yes = 1;
        }

        if (yes)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}

/*Step 1: Look at parity

2x is always even.

Therefore, the parity of the right side depends on ky.

Case A: n is even

Easy:

y=0,x=n/2

So YES.

Step 2: What if n is odd?

Then:

2x+ky=odd

Since 2x is even, ky must be odd.

For a product k*y to be odd:

k must be odd AND y must be odd

So if k is even, an odd n is impossible.

Example:

11=2x+4y

Left side is always even → impossible.

Step 3: n odd and k odd

Now we know we need an odd y.

The smallest possible positive odd y is 1.

Try:

y=1

Then:

2x+k=n

so:

x=
2
n−k
	​


For x to be non-negative:

n−k≥0

which means:

n≥k

And because both n and k are odd:

n−k

is automatically even, so x is an integer.

Therefore:

If n is odd, we need k odd and n≥k
	​

Final logic
YES if{
n is even
OR (n≥k AND k is odd)
	​

	​
*/