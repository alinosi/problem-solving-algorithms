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

/*

Run at https://codeforces.com/contest/158A/status/page/1?order=asc&filter=all&locale=en
Problem: 158A - Next Round
Contest: Codeforces Round #88 (Div. 2) (https://codeforces.com/contest/158)
Author: Mike Mirzayanov (http://codeforces.com/profile/mir)zayanov
Time: 2010-11-20 18:00:00
Time complexity: 154ms O(n)
Space complexity: 100kb O(n)

*/
