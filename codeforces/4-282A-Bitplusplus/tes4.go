package main

import "fmt"

func main() {
	var n int
	var x int = 0
	var input string

	fmt.Scan(&n)

	for n > 0 {
		fmt.Scan(&input)
		if input == "++x" || input == "x++" || input == "++X" || input == "X++" {
			x++
		} else if input == "--x" || input == "x--" || input == "--X" || input == "X--" {
			x--
		}

		n--
	}

	fmt.Println(x)
}