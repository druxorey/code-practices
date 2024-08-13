def main():
    print("\n[========= FIBONACCY SEQUENCE =========]\n")

    value = int(input("Introduce la cantidad de iteraciones: "))

    a, b = 0, 1

    print(f"\nLa secuencia de fibonacci hasta la posición {value} es:", end=" ")
    for _ in range(value):
        print(b, end=" ")
        a, b = b, a + b
    print("\n")


if __name__ == "__main__":
    main()
