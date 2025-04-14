package main

import "fmt"

func main() {

	var n int
	fmt.Scan(&n)

	var a []int
	a = make([]int, n)
	var output int = 0
	var temp int = 0

	for i := 0; i < n; i++ {
		for j := 0; j < 3; j++ {
			fmt.Scan(&a[j])
			if a[j] <= 1 && a[j] >= 0 {
				temp += a[j]
			}
		}
		if temp > 1 {
			output++
		}
		temp = 0
	}

	fmt.Println(output)
}
