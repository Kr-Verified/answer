#include <stdio.h>

int solution(int num_list[], size_t num_list_len) {
    int answer = 0, i = 0;
    while (i<num_list_len) {
        if (num_list[i]==1) i++;
        else {
            num_list[i] = num_list[i]&1?(num_list[i]-1)/2:num_list[i]/2;
            answer++;
        }
    }
    return answer;
}

int main() {
  int num_list[] = {12, 4, 15, 1, 14};
  printf("%d\n", solution(num_list, sizeof(num_list)/sizeof(num_list[0])));
  return 0;
}