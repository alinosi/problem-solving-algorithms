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

/*
  Run at https://codeforces.com/contest/50A/status/page/1?order=asc&filter=all&locale=en
  Problem: 50A - Domino Piling (https://codeforces.com/contest/50)
  Contest: Codeforces Round #1 (https://codeforces.com/contest/50)
  Author: Mike Mirzayanov (http://codeforces.com/profile/mir)zayanov
  Time: 2010-11-20 18:00:00
  Time complexity: 122ms O(1)
  Space complexity: 100kb O(1)
  Note: This is a simple problem, but it is a good example of how to use the Go language for competitive programming.
*/
