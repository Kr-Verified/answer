#include <stdio.h>

int main() {
  int n=0, cnt=0, odd=0;
  scanf("%d",&n);

  while(cnt<=500) {
    if(n%2==0) n/=2;
    else
    {
      n=3*n+1;
      odd++;
    }
    cnt++;
    if (n==1)
    {
      printf("%d\n",odd);
      return 0;
    }
  }
  printf("-1\n");
  return 0;
}