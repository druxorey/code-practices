import time

# The average execution time of this script is 3928.1 ms after 10 test

ITERATIONS: int = 10
NUMBER: int = 100_000_000

def speedtest() -> float:
	start: float = time.time() * 1000

	count = 0
	for _ in range (NUMBER):
		count += 1

	duration: float = round(time.time() * 1000 - start)

	return duration


def main():
	averageExecutionTime: float = 0
	finalDuration: float = 0

	print("Starting speed test...")

	for i in range(ITERATIONS):
		finalDuration = speedtest()
		averageExecutionTime += finalDuration
		print(f"{i + 1}. Counting to {NUMBER} in Python took {finalDuration} ms")
	
	averageExecutionTime /= ITERATIONS

	print(f"\n\033[32mAverage execution time: {averageExecutionTime} ms.")


if __name__ == "__main__":
	main()
