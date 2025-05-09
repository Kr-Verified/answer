#include <stdio.h>

int main() {
  int r, g, b, n, temp;
  char ac, bc;
  scanf("%d %d %d", &r, &g, &b);
  scanf("%d", &n);

  for (int i=0; i<n; i++) {
    scanf(" %c %c", &ac, &bc);
    if ((ac == 'r'&&bc=='g')||(ac=='g'&&bc=='r')) {
      temp = r;
      r = g;
      g = temp;
    }else if ((ac == 'r'&&bc=='b')||(ac=='b'&&bc=='r')) {
      temp = r;
      r = b;
      b = temp;
    }else if ((ac == 'b'&&bc=='g')||(ac=='g'&&bc=='b')) {
      temp = b;
      b = g;
      g = temp;
    }
  }

  printf("%c\n", r>g?(r>b?'r':(g>b?'g':'b')):g>b?'g':'b');
  printf("%d %d %d\n", r, g, b);
  return 0;
}