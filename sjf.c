#include <stdio.h>

int main() {
    int n;
    int at[100], bt[100], ct[100], tat[100], wt[100];
    int completed[100] = {0};

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter AT and BT for P%d: ", i + 1);
        scanf("%d %d", &at[i], &bt[i]);
    }

    int time = 0, count = 0;
    float totalWT = 0, totalTAT = 0;

    while (count < n) {
        int idx = -1;
        int minBT = 999999;

        for (int i = 0; i < n; i++) {
            if (!completed[i] && at[i] <= time) {
                if (bt[i] < minBT) {
                    minBT = bt[i];
                    idx = i;
                }
            }
        }

        if (idx == -1) {
            time++;
            continue;
        }

        time += bt[idx];

        ct[idx] = time;
        tat[idx] = ct[idx] - at[idx];
        wt[idx] = tat[idx] - bt[idx];

        completed[idx] = 1;
        count++;
    }

    printf("\nP\tAT\tBT\tCT\tTAT\tWT\n");

    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
               i + 1, at[i], bt[i],
               ct[i], tat[i], wt[i]);

        totalWT += wt[i];
        totalTAT += tat[i];
    }

    printf("\nAverage WT = %.2f", totalWT / n);
    printf("\nAverage TAT = %.2f\n", totalTAT / n);

    return 0;
}
