/*
#include <bits/stdc++.h>

using namespace std;

// program for finding no. of divisors
long long int divCount(long long int n)
{
    // sieve method for prime calculation
    bool hash[n + 1];
    memset(hash, true, sizeof(hash));
    for (long long int p = 2; p * p < n; p++)
        if (hash[p] == true)
            for (long long int i = p * 2; i < n; i += p)
                hash[i] = false;

    // Traversing through all prime numbers
    long long int total = 1;
    for (long long int p = 2; p <= n; p++) {
        if (hash[p]) {

            // calculate number of divisor
            // with formula total div =
            // (p1+1) * (p2+1) *.....* (pn+1)
            // where n = (a1^p1)*(a2^p2)....
            // *(an^pn) ai being prime divisor
            // for n and pi are their respective
            // power in factorization
            long long int count = 0;
            if (n % p == 0) {
                while (n % p == 0) {
                    n = n / p;
                    count++;
                }
                total = total * (count + 1);
            }
        }
    }
    return total;
}

// driver program
int main()
{
    long long int n;
    cin>>n;
    cout << divCount(n);
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

// function to count the divisors
long long int countDivisors(long long int n)
{
    long long int cnt = 0;
    for (long long int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;

            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}

/* Driver program to test above function */
int main()
{
    long long int n;
    cin>>n;
    printf("Total distinct divisors of 100 are : %d",
           countDivisors(n));
    return 0;
}

