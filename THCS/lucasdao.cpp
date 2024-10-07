#include <stdio.h>

#include <stdbool.h>

#include <math.h>

bool isPrime(int num) {

    if (num <= 1) return false;

    if (num == 2) return true;

    if (num % 2 == 0) return false;

    for (int i = 3; i <= sqrt(num); i += 2) {

        if (num % i == 0) {

            return false;

        }

    }

    return true;

}

int main() {

	int n ;
	scanf("%d", &n) ;
	int a[n] ;
	for( int i = 0 ; i < n ; i++)
	{
		scanf("%d", &a[i]) ;
	}
    int count = 0;

    for (int i = 0; i < 100; i++) {

        for (int j = i + 1; j < 100; j++) {

            if (isPrime(a[i]) && isPrime(a[j])) {
                count++;

            }

        }

    }

    printf("%d", count);

    return 0;

}