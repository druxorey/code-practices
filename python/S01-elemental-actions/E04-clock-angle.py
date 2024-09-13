def main():
    print("\n[========= CLOCK ANGLE =========]\n")

    hourValue = int(input("Enter the hour: "))
    minuteValue = int(input("Enter the minute: "))

    hourAngle = hourValue * 30
    minuteAngle = minuteValue * 6
    angleDifference = minuteAngle / 12

    finalAngle = abs(( hourAngle + angleDifference ) - minuteAngle)

    print(f"The final angle is {finalAngle}")

if __name__ == "__main__":
    main()
