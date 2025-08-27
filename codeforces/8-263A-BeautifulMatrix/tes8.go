package main

import "fmt"

func main() {
	var (
		a      [5][5]int
		output int
	)

	for i := 0; i < 5; i++ {
		for j := 0; j < 5; j++ {
			fmt.Scan(&a[i][j])
		}
	}

	for i := 0; i < 5; i++ {
		for j := 0; j < 5; j++ {
			if a[i][j] == 1 {
				if i >= 2 && j >= 2 {
					output = (i - 2) + (j - 2)

				} else if i >= 2 && j <= 2 {
					output = (i - 2) + (2 - j)

				} else if i <= 2 && j >= 2 {
					output = (2 - i) + (j - 2)

				} else if i <= 2 && j <= 2 {
					output = (2 - i) + (2 - j)

				} else {
					output = 0
				}
			}
		}
	}

	fmt.Println(output)
}