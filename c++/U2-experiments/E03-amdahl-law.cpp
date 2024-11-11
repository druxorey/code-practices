#include <iostream>

double calculateSpeedup(double a, double k) {
    return 1 / ((1 - a) + (a / k));
}


double calculatePerformanceFactor(double s, double a) {
    return a / ((1 / s) - (1 - a));
}


double calculateParallelizableFraction(double s, double k) {
    return (1 - (1 / s)) / (1 - (1 / k));
}


int main() {
    double s = 0, a = 0, k = 0;
    int option = 0;

    std::cout << "\n\e[0;35m[========= AMDAHL LAW =========]\e[0m\n" << '\n';

    do {
        printf("1. Speedup factor (s)\n");
        printf("2. Performance factor (k)\n");
        printf("3. Percentage of the program that can be parallelized (a)\n");
        printf("\n\e[0;33mSelect the variable you want to calculate [1, 2, 3]:\e[0m ");
        scanf("%d", &option);
    } while (option < 1 || option > 3);

    if (option == 1) {
        printf("Enter the percentage of the program that can be parallelized (a): ");
        scanf("%lf", &a);
        printf("Enter the number of processors (k): ");
        scanf("%lf", &k);
        printf("\n\e[0;32mThe speedup factor is %lf\e[0m\n", calculateSpeedup(a, k));
        return 0;
    }

    if (option == 2) {
        printf("Enter the speedup factor (s): ");
        scanf("%lf", &s);
        printf("Enter the percentage of the program that can be parallelized (a): ");
        scanf("%lf", &a);
        printf("\n\e[0;32mThe performance factor is %lf\e[0m\n", calculatePerformanceFactor(s, a));
        return 0;
    }

    if (option == 3) {
        printf("Enter the speedup factor (s): ");
        scanf("%lf", &s);
        printf("Enter the number of processors (k): ");
        scanf("%lf", &k);
        printf("\n\e[0;32mThe percentage of the program that can be parallelized is %lf\e[0m\n", calculateParallelizableFraction(s, k));
        return 0;
    }
	
    return 0;
}
