def main():
    print("\n[========= BINARY TO DECIMAL =========]\n")

    binary = input("Enter a binary number: ")

    first = int(binary[3])
    second = int(binary[2])
    third = int(binary[1])
    fourth = int(binary[0])

    decimal = (first * 2 ** 0) + (second * 2 ** 1) + (third * 2 ** 2) +  (fourth * 2 ** 3)

    print(f"\nThe result of inverting the number is: {decimal}")


if __name__ == "__main__":
    main()
