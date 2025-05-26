package main

import "fmt"

func main() {
	var rows int
	gap := rows
	oddFactor := 0

	fmt.Print("Enter the number of rows for the pyramid: ")
	fmt.Scan(&rows)

	for i := 1; i <= rows; i++ {
		for gap := gap - 1; gap >= 0; gap-- {
			fmt.Print(" ")
		}

		for j := 1; j <= i+oddFactor; j++ {
			fmt.Print("*")
		}

		// if the index of i = 1 the oddfactor is 0 so j will print itself i+oddfactor times

		// reason
		// row 1 1 *
		// row 2 3 *
		// etc....

		// (index of row) + (differentiatting factor) = (number of stars)
		// 1 + 0 = 0
		// 2 + 1 = 3
		// 3 + 2 = 5
		// 4 + 3 = 7

		oddFactor++

		fmt.Println("")

		gap--
	}

}
