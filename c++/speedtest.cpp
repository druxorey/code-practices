#include <iostream>
#include <chrono>

// The average execution time of this script is 172.1 ms after 10 test

const int ITERATIONS = 10;
const int NUMBER = 100000000;

int speedtest() {
	auto start = std::chrono::high_resolution_clock::now();

	int count=0;
	for(int i = 0; i <= NUMBER; i++){
		count++;
	}

	auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

	return duration.count();
}


int main(){
	float averageExecutionTime = 0, finalDuration = 0;

	std::cout << "Starting speed test...\n";

	for(int i = 0; i < ITERATIONS; i++){
		finalDuration = speedtest();
		averageExecutionTime += finalDuration;
		std::cout << i + 1 << ". Counting to number " << NUMBER << " in C++ took " << finalDuration << " ms\n";
	}

	averageExecutionTime /= ITERATIONS;

	std::cout << "\n\e[0;32mAverage execution time: " << averageExecutionTime << " ms.\e[0m\n";

	return 0;
}
