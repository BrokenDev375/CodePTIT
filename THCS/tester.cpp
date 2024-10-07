#include <stdio.h>

int a[2000005];

// Sieve of Eratosthenes to mark smallest prime factor for every number
void era() {
    for (int i = 2; i * i <= 2000000; i++) {
        if (!a[i]) {
            for (int j = i * i; j <= 2000000; j += i) {
                if (!a[j])
                    a[j] = i;
            }
        }
    }
    for (int i = 2; i <= 2000000; i++) {
        if (!a[i])
            a[i] = i; // If it's prime, mark it with itself
    }
}

int main() {
    era();
    int x;
    scanf("%d", &x);
    
    while (x != 1) {
        int tmp = a[x]; // Get the smallest prime factor of x
        int dem = 0;
        
        // Count the occurrences of tmp as a factor
        while (x % tmp == 0) {
            dem++;
            x /= tmp;
        }
        
        printf("%d %d\n", tmp, dem); // Print the prime factor and its count
    }
    	
    return 0;
}
