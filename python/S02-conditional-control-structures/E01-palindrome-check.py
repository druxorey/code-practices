def main():
    print("\n\033[35m[========= PALINDROME CHECK =========]\033[0m\n")

    number = int(input("Enter a number: "))

    if (number > 99999 or number < 10000):
        print("Please enter a 5 digit number.")
        return
    
    inverted = int(str(number)[::-1])

    if (number == inverted):
        print(f"\033[32m{number}\033[0m is a palindrome number.")
    else:
        print(f"\033[31m{number}\033[0m is not a palindrome number.")


if __name__ == "__main__":
    main()
