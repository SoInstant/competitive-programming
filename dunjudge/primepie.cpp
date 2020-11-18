#include <bits/stdc++.h>
using namespace std;

bool isPrime[16000010];
vector<int> primes;


long long int amountEaten(int n) {
	memset(isPrime, 1, sizeof isPrime);
	isPrime[0] = isPrime[1] = 0;
	primes.push_back(2);
	for (int i = 4; i <= 16000000; i += 2) isPrime[i] = 0; // set all even numbers above 2 to notprime
	for (int i = 3; i <= 16000000; i += 2) { // check odd numbers
		if (isPrime[i]) {
			for (int j = 2 * i; j <= 16000000; j += i) {isPrime[j] = 0;}
			// set all multiples of a prime to notprime
			primes.push_back(i);
		}
	}
	long long int sum = 0;
	for (int i = 0; i < n; ++i) sum+= primes[i];
	return sum;
}
