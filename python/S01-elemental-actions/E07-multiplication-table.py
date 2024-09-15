def main():
    print("\n\033[35m[========= MULTIPLICATION TABLE =========]\033[0m\n")

    number = int(input("Enter a number: "))

    print("\nMultiplication Table of", number)
    print("===========================")
    print(f"1  * {number} = {number * 1}")
    print(f"2  * {number} = {number * 2}")
    print(f"3  * {number} = {number * 3}")
    print(f"4  * {number} = {number * 4}")
    print(f"5  * {number} = {number * 5}")
    print(f"6  * {number} = {number * 6}")
    print(f"7  * {number} = {number * 7}")
    print(f"8  * {number} = {number * 8}")
    print(f"9  * {number} = {number * 9}")
    print(f"10 * {number} = {number * 10}")


if __name__ == "__main__":
    main()
