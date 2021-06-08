
// FCFS : AIM : A program to simulate the FCFS CPU scheduling algorithm
#include <stdio.h>
#include <conio.h>
#include <dos.h>
             void
             main()
{
    int n, b[10], w[10], i, j, h;
    int stime[10];
    float avg = 0;
    printf("JOB SCHEDULING ALGORITHM[FCFS]");
    printf("\n*****************************************************\n");
    printf("Enter howmany jobs:");
    scanf("%d", &n);
    printf("Enter burst time for corresponding job....");
    for (i = 0; i < n; i++)
    {
        printf("\nProcess %d:", i + 1);
        scanf("%d", &b[i]);
    }
    w[0] = 0;
    printf("process 1 waiting time is 0");
    for (i = 1; i < n; i++)
    {
        w[i] = b[i - 1] + w[i - 1];
        printf("\nProcess %d waiting time: %d", i + 1, w[i]);
        avg += w[i];
    }
    printf("\ntotal waiting time:%f", avg);
    printf("\n\nthe average waiting time is:%f\n", avg / n);
    getch();
}
