package main

import "fmt"

func DisplayArray(arr []int) {
	for i := 0; i < len(arr); i++ {
		fmt.Printf("%d ", arr[i])
	}
	fmt.Println()
}

func BubbleSort(arr []int) {
	var temp = 0
	var flag = 0
	for i := 0; i < len(arr)-1; i++ {
		flag = 1
		for j := 0; j < len(arr)-i-1; j++ {
			if arr[j] > arr[j+1] {
				temp = arr[j]
				arr[j] = arr[j+1]
				arr[j+1] = temp
			}
			flag = 1
		}
		if flag == 0 {
			break
		}
	}
}

func main() {
	fmt.Println("Bubble sort in Go Lang.")
	arr := []int{1, 3, 2, 5, 4, 6, 8, 7, 10, 9}
	DisplayArray(arr)
	BubbleSort(arr)
	DisplayArray(arr)
}
