package main

import "fmt"

func headRecursion(num int) {
	if num > 0 {
		fmt.Printf("%d ", num)
		headRecursion(num - 1)
	}
}

func main() {
	fmt.Println("Head Recursion in go lang.")
	headRecursion(10)
	fmt.Printf("\n")
}
