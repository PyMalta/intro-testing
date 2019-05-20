package main

import (
	"testing"
)

func TestAddInt(t *testing.T) {
	sn := SimpleInt{2}
	testTable := []struct {
		name   string
		number int
		sum    int
	}{
		{"test add", 2, 4},
		// {"test invalid type", nil, 0},  // go is strongly typed: compiler prevents
	}

	for _, testCase := range testTable {
		t.Run(testCase.name, func(t *testing.T) {
			result := sn.add(testCase.number)
			if result != testCase.sum {
				t.Fatalf("Sum of %v, should be %v; got %v", testCase.name, testCase.sum, result)
			}
		})
	}
}

func TestMultiplyInt(t *testing.T) {
	sn := SimpleInt{2}
	testTable := []struct {
		name   string
		number int
		sum    int
	}{
		{"test multiply", 3, 6},
		// {"test invalid type", nil, 0},  // go is strongly typed: compiler prevents
	}

	for _, testCase := range testTable {
		t.Run(testCase.name, func(t *testing.T) {
			result := sn.multiply(testCase.number)
			if result != testCase.sum {
				t.Fatalf("Sum of %v, should be %v; got %v", testCase.name, testCase.sum, result)
			}
		})
	}
}
