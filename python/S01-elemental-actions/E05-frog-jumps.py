def main():
    print("\n[========= FROG JUMPS =========]\n")

    joseDistance = int(input("Enter the distance in centimeters that José has to jump: "))
    pedroDistance = int(input("Enter the distance in centimeters that Pedro has to jump: "))

    joseJumps = int(input("Enter the number of jumps that José can make: "))

    if (joseDistance * joseJumps % pedroDistance == 0):
        print("José can jump the distance in one jump.")
    else:
        print("José can't jump the distance in one jump.")


if __name__ == "__main__":
    main()
