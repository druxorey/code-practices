def main():
	print("\n\033[35m[========= INVERTED NUMBER =========]\033[0m\n")

	inputNumber:str = input("Enter a 4 digit number: ")
	invertedNumber:str = inputNumber[::-1]

	print(f"\nThe result of inverting the number is: {invertedNumber}")


if __name__ == "__main__":
	main()
