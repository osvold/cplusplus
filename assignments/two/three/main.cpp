// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <iostream>
#include <vector>
using namespace std;

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    vector<bool> prime(n+1, true);

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime.at(p))
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p) {
                prime.at(i) = false;
            }
        }
    }


    // Print all prime numbers
    for (int p=2; p<=n; p++) {
        if (prime.at(p))
            cout << p << " ";
    }
}


int main() {
    int n = 30;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    SieveOfEratosthenes(n);
    return 0;
}