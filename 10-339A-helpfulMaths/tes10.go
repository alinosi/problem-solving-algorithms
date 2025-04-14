package main

import (
	"fmt"
	"slices"
	"strings"
)

func main() {
	var input string
	var output string

	fmt.Scan(&input)

	parts := strings.Split(input, "+")

	slices.Sort(parts)

	for i := 0; i < len(parts); i++ {
		if i == 0 {
			output = parts[i]
		} else {
			output = output + "+" + parts[i]
		}
	}

	fmt.Println(output)

}