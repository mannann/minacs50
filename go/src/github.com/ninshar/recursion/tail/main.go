package main

import "fmt"

func tailRecursion(num int) {
	if num > 0 {
		tailRecursion(num - 1)
		fmt.Printf("%d ", num)
	}
}

func main() {
	fmt.Println("Tail Recursion in go lang.")
	tailRecursion(10)
	fmt.Printf("\n")
}
