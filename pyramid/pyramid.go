package main

import "fmt"

func main() {
	var rows int
	differentiattingFactor := 0

	fmt.Print("Enter the number of rows for the pyramid: ")
	fmt.Scan(&rows)
	gap := rows

	for indexOfRow := 1; indexOfRow <= rows; indexOfRow++ {
		for gap := gap - 1; gap >= 0; gap-- {
			fmt.Print(" ")
		}

		for numberOfStars := 1; numberOfStars <= indexOfRow+differentiattingFactor; numberOfStars++ {
			fmt.Print("*")
		}

		// if the index of row = 1 then the differentiattingfactor is 0 so the number of star will printed as many as i+differentiattingfactor times

		// reason
		// row 1 1 *
		// row 2 3 *
		// etc....

		// (index of row) + (differentiatting factor) = (number of stars)
		// 1 + 0 = 0
		// 2 + 1 = 3
		// 3 + 2 = 5
		// 4 + 3 = 7

		differentiattingFactor++

		fmt.Println("")

		gap--
	}

}
