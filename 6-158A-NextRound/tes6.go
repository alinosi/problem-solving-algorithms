package main

import "fmt"

func main() {
	var (
		n = 0 // jumlah partisipan
		m = 0 // jumlah partisipan yang lolos
		kelulusan = 0
		a []int
	)

	fmt.Scan(&n, &m)

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
