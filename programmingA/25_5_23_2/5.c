#include <stdio.h>

int main() {
  char str1[100], str2[100], str3[200];
  fgets(str1, sizeof(str1), stdin);
  fgets(str2, sizeof(str2), stdin);
  int result = 0;
  for (int i = 0; str1[i]!='\0'; i++)
  {
    if (str1[i]!=str2[i])
    {
      result = str1[i]-str2[i];
      break;
    }
  }
  printf("%d\n", result);
  return 0;
}