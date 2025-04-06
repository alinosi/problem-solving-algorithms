package main

import "fmt"


func main() {
	var n, m, a int
	fmt.Scan(&n, &m, &a)

	h1 := (n + a - 1) / a
	h2 := (m + a - 1) / a
	h3 := h1 * h2
	
	fmt.Println(h3)
}