
#include <stdio.h>

int main() {
    int n, tq;
    int at[100], bt[100], rt[100];
    int ct[100], tat[100], wt[100];
    int visited[100] = {0};

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter AT and BT for P%d: ", i + 1);
        scanf("%d %d", &at[i], &bt[i]);
        rt[i] = bt[i];
    }

    printf("Enter Time Quantum: ");
    scanf("%d", &tq);

    if (tq <= 0) {
        printf("Invalid time quantum\n");
        return 0;
    }

    int q[10000], front = 0, rear = 0;
    int time = 0, completed = 0;

    while (completed < n) {

        for (int i = 0; i < n; i++) {
            if (!visited[i] && at[i] <= time) {
                q[rear++] = i;
                visited[i] = 1;
            }
        }

        if (front == rear) {
            time++;
            continue;
        }

        int idx = q[front++];

        int exec = (rt[idx] < tq) ? rt[idx] : tq;

        time += exec;
        rt[idx] -= exec;

        for (int i = 0; i < n; i++) {
            if (!visited[i] && at[i] <= time) {
                q[rear++] = i;
                visited[i] = 1;
            }
        }

        if (rt[idx] > 0) {
            q[rear++] = idx;
        }
        else {
            ct[idx] = time;
            tat[idx] = ct[idx] - at[idx];
            wt[idx] = tat[idx] - bt[idx];

            completed++;
        }
    }

    float totalWT = 0, totalTAT = 0;

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
