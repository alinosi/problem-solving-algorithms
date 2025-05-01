package main

import (
	"fmt"
	"strings"
)

func charcase(a string, b string) int {
	for i := 0; i < len(a); i++ {
		A := strings.ToLower(string(a[i]))
		B := strings.ToLower(string(b[i]))

		if A > B {
			return 1
		} else if A < B {
			return -1
		}
	}

	return 0
}

func main() {
	var a, b string

	fmt.Scan(&a, &b)

	result := charcase(a, b)

	fmt.Println(result)
}
