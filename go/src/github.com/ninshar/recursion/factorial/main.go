package main

import "fmt"

func factorialRegression(num int) int {
	if num == 0 {
		return 1
	} else {
		return factorialRegression(num-1) * num
	}
}

func factorialLoop(num int) int {
	x := 1
	for i := 1; i <= num; i++ {
		x = x * i
	}
	return x
}

func main() {
	fmt.Println("Factorial in Go Lang.")
	num1 := factorialRegression(10)
	fmt.Println(num1)
	num2 := factorialLoop(10)
	fmt.Println(num2)
}
