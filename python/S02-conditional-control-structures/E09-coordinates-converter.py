import numpy as np

def main():
	print("\n\033[35m[========= COORDINATES CONVERTER =========]\033[0m\n")

	print("1. Cartesian to Polar")
	print("2. Polar to Cartesian")

	option = int(input("Select an option: "))

	if (option == 1):
		print("\n\033[32m Converting from Cartesian to Polar\033[0m\n")

		x = float(input("Enter the value of x: "))
		y = float(input("Enter the value of y: "))

		theta = np.degrees(np.arctan2(y, x))
		r = np.hypot(x, y)

		print(f"The result is: radius = {r}, theta = {theta}")

	elif (option == 2):
		print("\n\033[32m Converting from Polar to Cartesian\033[0m\n")

		r = float(input("Enter the value of r: "))
		theta = float(input("Enter the value of theta: "))

		theta = np.radians(theta)
		x = r * np.cos(theta)
		y = r * np.sin(theta)

		print(f"The result is: x = {x}, y = {y}")

	else:
		print("\033[31mInvalid option.\033[0m")


if __name__ == "__main__":
	main()
