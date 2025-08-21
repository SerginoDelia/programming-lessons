package main

import "fmt"

func main() {
	banner("Go", 6)
	banner("G☺", 6)
	s := "G☺"
	fmt.Println("len: ", len(s))
}

func banner(text string, width int) {
	padding := (width - len(text)) / 2
	for i := 0; i < padding; i++ {
		fmt.Println(" ")
	}
	fmt.Println(text)
	for i := 0; i < width; i++ {
		fmt.Println("-")
	}
	fmt.Println()
}
