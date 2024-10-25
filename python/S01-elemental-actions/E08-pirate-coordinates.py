def main():
	print("\n\033[35m[========= PIRATE COORDINATES =========]\033[0m\n")

	firstNumber: int = int(input("Enter the first number: "))
	secondNumber: int = int(input("Enter the second number: "))
	thirdNumber: int = int(input("Enter the third number: "))

	xFirst: int = firstNumber // 100
	yFirst: int = firstNumber % 100

	xSecond: int = secondNumber // 100
	ySecond: int = secondNumber % 100

	xThird: int = thirdNumber // 100
	yThird: int = thirdNumber % 100

	xCentroid: float = round((xFirst + xSecond + xThird) / 3, 2)
	yCentroid: float = round((yFirst + ySecond + yThird) / 3, 2)

	print(f"\nCentroid coordinates: x={xCentroid}, y={yCentroid}")


if __name__ == "__main__":
	main()
