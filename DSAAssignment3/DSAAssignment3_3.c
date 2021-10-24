#include <stdio.h>
#include <limits.h>

char Array_prime[INT_MAX] = {0};


void Primes(int n) {
  for(int i = 2; i<=n; i++) {
    if(Array_prime[i] == 0)
      printf("%d ", i);
  }
  printf("\n");
}

void sieveOfEratosthenes(int n) {

  for(int i = 2; i*i<=n; i++) {
    if(Array_prime[i] == 0) {
      for(int l = 2; l*i<=n; l++)
        Array_prime[i*l] = 1;
    }
  }

}


int main() {  

  int b;
  scanf("%d", &b);

  sieveOfEratosthenes(b);
  Primes(b);

  return 0;
}