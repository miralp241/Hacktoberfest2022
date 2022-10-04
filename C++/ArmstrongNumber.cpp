#include <bits/stdc++.h>
using namespace std;
  
// Driver code
int main()
{
    int ord1, ord2, ord3, total_sum;
  
    cout << "All the Armstrong numbers between 1 to 1000 : ";
    
    // Loop which will run form 1 to 1000
    for (int num = 1; num <= 1000; ++num)
    {
        // All the single-digit numbers are
        // armstrong number.
        if (num <= 9)
        {
            cout << num << " ";
        }
        else
        {
            ord1 = num % 10;
            ord2 = (num % 100 - ord1) / 10;
            ord3 = (num % 1000 - ord2) / 100;
  
            total_sum = ((ord1 * ord1 * ord1) + 
                         (ord2 * ord2 * ord2) + 
                         (ord3 * ord3 * ord3));
            if (total_sum == num)
            {
                cout << num << " ";
            }
        }
    }
    return 0;
}
