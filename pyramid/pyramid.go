package main

import "fmt"

func main() {
	var rows int

	fmt.Print("Enter the number of rows for the pyramid: ")
	fmt.Scan(&rows)
	gap := rows

	for indexOfRow := 1; indexOfRow <= rows; indexOfRow++ {
		for gap := gap - 1; gap >= 0; gap-- {
			fmt.Print(" ")
		}

		for numberOfStars := 1; numberOfStars <= 2*indexOfRow-1; numberOfStars++ {
			fmt.Print("*")
		}

		fmt.Println()

		gap--
	}

}
