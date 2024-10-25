def main():
	print("\n\033[35m[========= BINARY TO DECIMAL =========]\033[0m\n")

	binary: str = input("Enter a binary number: ")

	first: int = int(binary[3])
	second: int = int(binary[2])
	third: int = int(binary[1])
	fourth: int = int(binary[0])

	decimal: int = (first * 2 ** 0) + (second * 2 ** 1) + (third * 2 ** 2) +  (fourth * 2 ** 3)

	print(f"\nThe result of inverting the number is: {decimal}")


if __name__ == "__main__":
	main()
