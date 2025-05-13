#include <stdio.h>
#include <time.h>
int main() {
  clock_t start = clock(), finish;
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
      finish = clock();
      printf("%f초입니다.\n",(float)(finish-start)/CLOCKS_PER_SEC);
      return 0;
    }
  }
  printf("-1\n");
  finish = clock();
  printf("%f초입니다.\n",(float)(finish-start)/CLOCKS_PER_SEC);
  return 0;
}