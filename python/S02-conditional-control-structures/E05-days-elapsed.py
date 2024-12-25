def main():
	print("\n\033[35m[========= DAYS ELAPSED =========]\033[0m\n")

	days = int(input("Enter the actual day: "))
	month = int(input("Enter the actual month: "))

	monthToDays = {
		1: 0,
		2: 31,
		3: 59,
		4: 90,
		5: 120,
		6: 151,
		7: 181,
		8: 212,
		9: 243,
		10: 273,
		11: 304,
		12: 334,
	}

	totalDays = days + monthToDays[month]

	print(f"\nThe total days elapsed are: {totalDays}\n")


if __name__ == "__main__":
	main()
