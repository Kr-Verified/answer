#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int h1, int m1, int s1, int h2, int m2, int s2) {
    int answer = 0, st=h1*3600+m1*60+s1;
    if (st==0 || h1==12*3600) answer++;
    for (int i=st; i<h2*3600+m2*60+s2; i++) {
        double ha = fmod(i*(1.0/120), 360), ma = fmod(i*0.1, 360), sa = i*6%360;
        double hna = fmod((i+1)*(1.0/120), 360), mna = fmod((i+1)*0.1, 360), sna = (i+1)*6%360;
        hna=(hna<(1.0/120)?hna+360:hna), mna=(mna<0.1?mna+360:mna), sna=(sna<6?sna+360:sna);
        printf("ha:%lf, ma:%lf, sa:%lf, hna:%lf, mna:%lf, sna:%lf\n", ha, ma, sa, hna, mna, sna);
        if (sa<ha && sna>=hna) answer++;
        if (sa<ma && sna>=mna) answer++;
        if (sna==hna && hna==mna) answer--;
    }
    return answer;
}

int main()
{
    solution(	12, 0, 0, 12, 0, 30);
    return 0;
}