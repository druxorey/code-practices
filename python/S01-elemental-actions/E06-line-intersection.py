def main():
	print("\n\033[35m[========= LINE INTERSECTION =========]\033[0m\n")

	m1: float = float(input("Enter the slope of the first line: "))
	b1: float = float(input("Enter the y-intercept of the first line: "))

	m2: float = float(input("Enter the slope of the second line: "))
	b2: float = float(input("Enter the y-intercept of the second line: "))

	xIntersection: float = (b2 - b1) / (m1 - m2)
	yIntersection: float = m1 * xIntersection + b1

	print(f"\nThe intersection point is at ({xIntersection}, {yIntersection}).")


if __name__ == "__main__":
	main()
