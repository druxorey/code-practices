#include <stdio.h>
#include <time.h>

// The average execution time of this script is 368.79 ms after 10 test

const int NUMBER = 100000000;
const int ITERATIONS = 10;

float speedtest() {
    struct timespec start, end;

	clock_gettime(CLOCK_REALTIME, &start);

    int count = 0;
    for (int i = 0; i < NUMBER; i++) {
        count++;
    }

    clock_gettime(CLOCK_REALTIME, &end);

    long long start_ns = start.tv_sec * 1e9 + start.tv_nsec;
    long long end_ns = end.tv_sec * 1e9 + end.tv_nsec;

    return (end_ns - start_ns) / 1e6;
}

int main() {
	float averageExecutionTime = 0, finalDuration = 0;

	printf("Starting speed test...\n");

	for(int i = 0; i < ITERATIONS; i++){
		finalDuration = speedtest();
		averageExecutionTime += finalDuration;
		printf("%d. Counting to number %d in C took %.2f ms\n", i + 1, NUMBER, finalDuration);
	}

	averageExecutionTime /= ITERATIONS;

	printf("\n\e[0;32mAverage execution time: %.2f ms.\e[0m\n", averageExecutionTime);

	return 0;
}
