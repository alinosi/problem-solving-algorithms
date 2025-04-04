package main

import (
	"fmt"
)

func main() {

	var n int

	fmt.Scan(&n)

	if n > 2 && n%2 == 0 {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}

}

/*
  Run at https://codeforces.com/contest/4/status/page/1?order=asc&filter=all&locale=en
  Problem: 4A - Watermelon (https://codeforces.com/contest/4)
  Contest: Codeforces Round #1 (https://codeforces.com/contest/4)
  time: 2010-11-20 18:00:00
  Time complexity: 124ms O(1)
  Space complexity: 0kb O(1)
*/
