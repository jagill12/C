#include <stdio.h>
#include <stdlib.h>

//Structure representing a job.
typedef struct Job {
    int id; //Job ID.
    int deadline; //Job deadline.
    int profit; //Profit is job is completed before or on deadline.
} Job;

int compare(const void *a, const void *b) { //This sorts jobs according to profit.
    return ((Job *)b)->profit - ((Job *)a)->profit;
}

void jobSequencing(Job jobs[], int n) { //Maximizes profits.
    qsort(jobs, n, sizeof(Job), compare); //Sorts all jobs by profit margin.

    int result[n]; //For the result later.
    int slot[n]; //Keep track of empty time slots.
    for (int i = 0; i < n; i++) {
        slot[i] = 0; //Start all jobs as empty time slots.
    }

    for (int i = 0; i < n; i++) { //Iterate through all jobs.
        for (int j = jobs[i].deadline - 1; j >= 0; j--) { //Start at the end to find a free slot.
            if (slot[j] == 0) { //If it has a free spot.
                result[j] = i; //Add this job to result.
                slot[j] = 1; //Slot is now occupied.
                break;
            }
        }
    }

    printf("Scheduled jobs to maximize profit: ");
    for (int i = 0; i < n; i++) {
        if (slot[i]) {
            printf("Job %d ", jobs[result[i]].id);
        }
    }
    printf("\n");
}

int main() {
    Job jobs[] = {{1, 2, 100}, {2, 1, 19}, {3, 2, 27}, {4, 1, 25}, {5, 3, 15}};
    int n = sizeof(jobs) / sizeof(jobs[0]);

    jobSequencing(jobs, n);

    return 0;
}
