package main

type SimpleInt struct {
	x int
}

func (sn SimpleInt) add(num int) int {
	return sn.x + num
}

func (sn SimpleInt) multiply(num int) int {
	return sn.x * num
}

type Numeric interface {
	add(num int) int
	multiply(num int) int
}

func main() {

}
