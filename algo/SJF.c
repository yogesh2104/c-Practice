
// JOB SCHEDULING ALGORITHM[SJF]

#include <stdio.h>
#include <conio.h>
#include <dos.h>
void main()
{
    int n, b[10], w[10], i, j, h, t, tt;
    int stime[10], a[10];
    float avg = 0;
    printf("JOB SCHEDULING ALGORITHM[SJF]");
    printf("\n*****************************************************\n");
    printf("\nEnter howmany jobs:");
    scanf("%d", &n);
    printf("\nEnter burst time for corresponding job....\n");
    for (i = 1; i <= n; i++)
    {
        printf("\nProcess %d:", i);
        scanf("%d", &b[i]);
        a[i] = i;
    }
    for (i = 1; i <= n; i++)
        for (j = i; j <= n; j++)
            if (b[i] > b[j])
            {
                t = b[i];
                tt = a[i];
                b[i] = b[j];
                a[i] = a[j];
                b[j] = t;
                a[j] = tt;
            }
    w[1] = 0;
    printf("\nprocess %d waiting time is 0", a[1]);
    for (i = 2; i <= n; i++)
    {
        w[i] = b[i - 1] + w[i - 1];
        printf("\nProcess %d waiting time: %d", a[i], w[i]);
        avg += w[i];
    }
    printf("\ntotal waiting time:%f", avg);
    printf("\n\nthe average waiting time is:%f\n", avg / n);
    getch();
}
