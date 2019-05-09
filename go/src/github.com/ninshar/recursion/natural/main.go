package main

import "fmt"

func naturalRecursion(num int) int {
	if num > 0 {
		return naturalRecursion(num-1) + num
	}
	return 0
}

func naturalLoop(num int) int {
	sum := 0
	for i := 0; i <= num; i++ {
		sum = sum + i
	}
	return sum
}

func main() {
	fmt.Println("Hello World!!!")
	num1 := naturalRecursion(10)
	fmt.Println(num1)
	num2 := naturalLoop(10)
	fmt.Println(num2)
}
