package main
import ("fmt"; "time")

// The average execution time of this script is 51.44 ms after 10 test

const ITERATIONS int = 10;
const NUMBER int = 100000000;

func speedtest() time.Duration {
	var start time.Time = time.Now();

	var count int = 0;
	for i := 0; i < NUMBER; i++ {
		count++;
	}

	var elapsed time.Duration = time.Since(start);
	return elapsed;
}

func main() {
	var totalExecutionTime, finalDuration time.Duration;

	fmt.Printf("Starting speed test...\n")

	for i := 0; i < ITERATIONS; i++ {
		finalDuration = speedtest();
		totalExecutionTime += finalDuration;
		fmt.Printf("%d. Counting to number %d in Golang took %v\n", i + 1, NUMBER, finalDuration);
	}

	averageExecutionTime := totalExecutionTime / time.Duration(ITERATIONS)
	fmt.Printf("\n\033[0;32mAverage execution time: %v\n", averageExecutionTime)
}
