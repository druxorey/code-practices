def main():
    print("\n[========= INVERTED NUMBER =========]\n")

    inputNumber = input("Enter a 4 digit number: ")
    invertedNumber = inputNumber[::-1]

    print(f"\nThe result of inverting the number is: {invertedNumber}")


if __name__ == "__main__":
    main()
