def main():
    print("\n\033[35m[========= PIRATE COORDINATES =========]\033[0m\n")

    firstNumber = int(input("Enter the first number: "))
    secondNumber = int(input("Enter the second number: "))
    thirdNumber = int(input("Enter the third number: "))

    xFirst = firstNumber // 100
    yFirst = firstNumber % 100

    xSecond = secondNumber // 100
    ySecond = secondNumber % 100

    xThird = thirdNumber // 100
    yThird = thirdNumber % 100

    xCentroid = round((xFirst + xSecond + xThird) / 3, 2)
    yCentroid = round((yFirst + ySecond + yThird) / 3, 2)

    print(f"\nCentroid coordinates: x={xCentroid}, y={yCentroid}")


if __name__ == "__main__":
    main()
