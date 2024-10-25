#!/bin/bash

# The average execution time of this script is 261204 ms (4.35 min) after 10 test

ITERATIONS=10
NUMBER=100000000

function speedtest() {
    start=$(date +%s%N)

    count=0
    for (( i = 0; i <= NUMBER; i++ )); do
		count=$((count + 1))
    done

    end=$(date +%s%N)

    duration=$(( (end - start) / 1000000 ))
    echo $duration
}


function main(){
	averageExecutionTime=0

	echo "Starting speed test..."

	for (( i = 0; i < ITERATIONS; i++ )); do
		finalDuration=$(speedtest)
		averageExecutionTime=$((averageExecutionTime + finalDuration))
		echo -e "$((i + 1)). Counting to number $NUMBER in Bash took $finalDuration ms"
	done

	averageExecutionTime=$((averageExecutionTime / ITERATIONS))

	echo -e "\n\033[32mAverage execution time: $averageExecutionTime ms."
}

main bash
