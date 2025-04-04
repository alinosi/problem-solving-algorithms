package main

import "fmt"

func main() {
	var n int = 0 // jumlah partisipan
	var m int = 0
	var kelulusan int = 0

	fmt.Scan(&n)
	fmt.Scan(&m)

	var a []int
	a = make([]int, n)

	if m >= 1 {
		for i := 0; i < n; i++ {
			fmt.Scan(&a[i])
		}

		for j := 0; j < n; j++ {
			if a[j] >= a[m-1] && a[j] > 0 {
				kelulusan++
			}
		}
	}

	fmt.Println(kelulusan)
}
