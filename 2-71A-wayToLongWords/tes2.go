package main

import "fmt"

func main() {

	var n int
	fmt.Scan(&n)

	var a []string
	a = make([]string, n)

	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}

	for i := 0; i < n; i++ {
		if len(a[i]) <= 10 {
			fmt.Println(a[i])
		} else {
			fmt.Printf("%c%d%c\n", a[i][0], len(a[i])-2, a[i][len(a[i])-1])
		}
	}
}