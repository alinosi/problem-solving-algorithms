package main

import "fmt"

func main() {
	var n int
	var x int = 0
	var input string

	fmt.Scan(&n)

	for n > 0 {
		fmt.Scan(&input)
		if input == "++x" || input == "x++" || input == "++X" || input == "X++" {
			x++
		} else if input == "--x" || input == "x--" || input == "--X" || input == "X--" {
			x--
		}

		n--
	}

	fmt.Println(x)
}

/*
  Run at https://codeforces.com/contest/282A/status/page/1?order=asc&filter=all&locale=en
  Problem: 282A - Bit++ (https://codeforces.com/contest/282)
  Contest: Codeforces Round #162 (Div. 2) (https://codeforces.com/contest/282)
  Author: Mike Mirzayanov (http://codeforces.com/profile/mir)zayanov
  Time: 2010-11-20 18:00:00
  Time complexity: 62ms O(n)
  Space complexity: 100kb O(n)
*/