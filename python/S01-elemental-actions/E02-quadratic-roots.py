def main():
    print("\n\033[35m[========= QUADRATIC ROOTS =========]\033[0m\n")

    a = float(input("Enter the quadratic value: "))
    b = float(input("Enter the lineal value: "))
    c = float(input("Enter the independent value: "))

    discriminant = b ** 2 - 4 * a * c

    firstRoot = (-b + discriminant ** 0.5) / (2 * a)
    secondRoot = (-b - discriminant ** 0.5) / (2 * a)

    print(f"\nThe roots of the quadratic equation are: {firstRoot} and {secondRoot}\n")


if __name__ == "__main__":
    main()
