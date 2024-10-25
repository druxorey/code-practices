def main():
	print("\n\033[35m[========= FROG JUMPS =========]\033[0m\n")

	joseDistance: int = int(input("Enter the distance in centimeters that José has to jump: "))
	pedroDistance: int = int(input("Enter the distance in centimeters that Pedro has to jump: "))

	joseJumps: int = int(input("Enter the number of jumps that José can make: "))

	if (joseDistance * joseJumps % pedroDistance == 0):
		print("José can jump the distance in one jump.")
	else:
		print("José can't jump the distance in one jump.")


if __name__ == "__main__":
	main()
