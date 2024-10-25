def main():
	print("\n\033[35m[========= CLOCK ANGLE =========]\033[0m\n")

	hourValue: int = int(input("Enter the hour: "))
	minuteValue: int = int(input("Enter the minute: "))

	hourAngle: float = hourValue * 30
	minuteAngle: float = minuteValue * 6
	angleDifference: float = minuteAngle / 12

	finalAngle: float = abs(( hourAngle + angleDifference ) - minuteAngle)

	print(f"\nThe final angle is {finalAngle}")


if __name__ == "__main__":
	main()
