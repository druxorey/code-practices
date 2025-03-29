import java.util.Scanner;

public class E01_legal_data {
    public static void main(String[] args) {
        System.out.println("\n\033[0;35m[========= LEGAL DATA =========]\033[0m\n");

		Scanner scanner = new Scanner(System.in);

		System.out.print("\n\033[0;34mEnter the following data: \033[0m\n");

		System.out.print(" - Enter your full name: ");
		String fullName = scanner.nextLine();

		System.out.print(" - Enter your age: ");
		int age = scanner.nextInt();

		System.out.print(" - Enter your gender [m/f]: ");
		char gender = scanner.next().charAt(0);

		System.out.print(" - Enter your height: ");
		double height = scanner.nextDouble();

		System.out.print(" - Enter your weight: ");
		double weight = scanner.nextDouble();

		System.out.print(" - Are you married? (true/false): ");
		boolean isMarried = scanner.nextBoolean();

        scanner.close();

		System.out.print("\n\033[0;34mCollected data: \033[0m\n");
		System.out.println("\033[0m - Full Name:    \033[0;32m" + fullName);
		System.out.println("\033[0m - Age:          \033[0;32m" + age);
		System.out.println("\033[0m - Gender:       \033[0;32m" + gender);
		System.out.println("\033[0m - Height:       \033[0;32m" + height);
		System.out.println("\033[0m - Weight:       \033[0;32m" + weight);
		System.out.println("\033[0m - is Married?:  \033[0;32m" + isMarried);
		System.out.println();
    }
}
