#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxqueue.cpp"

float getAverage(dxqueue<int> queue) {
	float sum = 0;

	for (int i = 0; i < queue.size(); i++) {
		sum += queue.front();
		queue.pop();
	}

	return sum / queue.size();
}


void reverseQueue(dxqueue<int> &queue) {
	if (queue.empty()) return;

	int front = queue.front();
	queue.pop();
	reverseQueue(queue);
	queue.push(front);
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= REVERSE AVERAGE =========]\e[0m\n\n";

	int queueSize;
	getcin("Enter the size of the queue: ", queueSize);

	dxqueue<int> queue;

	queue.rand(queueSize);
	printf("\n\e[0;34mInitial queue: \e[0m\n\n");
	printQueue(queue);

	reverseQueue(queue);
	printf("\n\e[0;34mReversed queue: \e[0m\n\n");
	printQueue(queue);

	float average = getAverage(queue);
	printf("\n\e[0;32mThe average of the queue is: %.2f\e[0m\n\n", average);

	return 0;
}
