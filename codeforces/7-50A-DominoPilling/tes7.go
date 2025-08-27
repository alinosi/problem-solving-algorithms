package main

import "fmt"

func main() {
	var (
		n = 0 // jumlah partisipan
		m = 0 // jumlah partisipan yang lolos
	)

	fmt.Scan(&n, &m)
	fmt.Println(n * m / 2)
}