#include <stdio.h>

struct TIME {
    int hour;
    int minute;
    int second;
};


void addTime(struct TIME *start, struct TIME *stop, struct TIME *sum) {
    sum->second = start->second + stop->second;
    sum->minute = start->minute + stop->minute;
    sum->hour = start->hour + stop->hour;

    if (sum->second >= 60) {
        sum->second -= 60;
        sum->minute++;
    }
    if (sum->minute >= 60) {
        sum->minute -= 60;
        sum->hour++;
    }
}

void diffTime(struct TIME *start, struct TIME *stop, struct TIME *diff) {
    int totalStart = start->hour * 3600 + start->minute * 60 + start->second;
    int totalStop = stop->hour * 3600 + stop->minute * 60 + stop->second;
    int totalDiff = totalStop - totalStart;

    if (totalDiff < 0) 
	totalDiff = -totalDiff; 

    diff->hour = totalDiff / 3600;
    diff->minute = (totalDiff % 3600) / 60;
    diff->second = (totalDiff % 3600) % 60;
}

int main() {
    struct TIME start, stop, sum, diff;


    printf("Enter start time (HH MM SS): ");
    scanf("%d %d %d", &start.hour, &start.minute, &start.second);

    printf("Enter stop time (HH MM SS): ");
    scanf("%d %d %d", &stop.hour, &stop.minute, &stop.second);

    addTime(&start, &stop, &sum);
    diffTime(&start, &stop, &diff);

    printf("\nSum of times: %02d:%02d:%02d\n", sum.hour, sum.minute, sum.second);
    printf("Difference of times: %02d:%02d:%02d\n", diff.hour, diff.minute, diff.second);

    return 0;
}

