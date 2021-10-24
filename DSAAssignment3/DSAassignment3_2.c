#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX (int)1e4

void Input_Best(int n, int input[]) {
  for(int i = 0; i<n; i++)
    input[i] = i;
}

void Input_Worst(int n, int input[]) {
  for(int i = 0; i<n; i++)
    input[i] = n-i-1;
}

void Input_Average(int n, int input[]) {
  for(int i = 0; i<n; i++)
    input[i] = rand()%MAX;
}


void insertionSort(int n, int input[]) {
  int key, l;
  for (int i = 1; i < n; i++)
  {
    key = input[i];
    l = i - 1;
    while (l >= 0 && input[l] > key)
    {
        input[l + 1] = input[l];
        l = l - 1;
    }
    input[l + 1] = key;
  }
}

int main() {

  srand(time(0));

  int n;
  printf("Please enter size of the input : ");
  scanf("%d", &n);

  int input[n];

  int k;
  printf("1. Average Case\n");
  printf("2. Best Case\n");
  printf("3. Worst Case\n");
  printf("Select type of Input : ");
  scanf("%d", &k);

  switch(k) {
    case 1:
      Input_Average(n, input);
      break;

    case 2:
      Input_Best(n, input);
      break;
    
    case 3:
      Input_Worst(n, input);
      break;

    default:
      printf("Incorrect option\n");
      return 0;
      break;
  }

  clock_t start = clock();

  insertionSort(n, input);

  clock_t end = clock();
  printf("Total elapsed time : %f\n", (double)(end - start)/(double)CLOCKS_PER_SEC);

  return 0;
}