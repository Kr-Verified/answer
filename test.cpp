#include <print>
#include <stdio.h>

int main()
{
    /*int h, m;
    scanf("%d시 %d분", &h, &m);
    int time = ((h*60+m)*25)/18;
    printf("%d시 %d분", time/100, time%100);*/

    int bin;
    scanf("%d", &bin);
    printf("%d\n", bin/4%2==1);
    return 0;
}