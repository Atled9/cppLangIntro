#include <iostream>

//void arrayTest(int array[], int size);
void printArray(int array[], int size);
void bubbleSort(int array[], int size);

int main() {
	/*
	//implementation of BubbleSort
	//Start with an array test
	int numArr[] = {1, 2, 3, 4, 5};
	int size = sizeof(numArr)/sizeof(numArr[0]);

	//If the array is zeroed out, then the array is modified
	//by the function. Otherwise, only a copy is modified
	printArray(numArr, size);
	arrayTest(numArr, size);
	printArray(numArr, size);
	//The test has shown that the array is modified by the function
	//The original array is passed into the function, not a copy
	*/
	int unorderedArr[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
	int size = sizeof(unorderedArr)/sizeof(unorderedArr[0]);
	printArray(unorderedArr, size);
	bubbleSort(unorderedArr, size);
	printArray(unorderedArr, size);
	
	return 0;
}
/*
void arrayTest(int array[], int size) {
	//Zero array for the test
	for (int i = 0; i < size; i++) {
		array[i] = 0;
	}

}
*/
void printArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << ' ';
	}
	std::cout << '\n';

}
//This implementation is inefficient, because we already know 
//that the highest nth numbers have been placed in their correct
//positions after n array traversals. We do not need to iterate
//over every single element on every pass 
/*
void bubbleSort (int array[], int size) {
	bool swapped = true;
	int temp;

	while (swapped) {
		swapped = false;
		for (int i = 0; i < size - 1; i++) {
			if (array[i] > array[i + 1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = true;
			}
		}
	}
}*/
//This implementation could be optimized further
//with a swapped boolean to terminate the function when it is
//already sorted. As it stands, this implementation has a stable
//time complexity of O(n^2) 
void bubbleSort(int array[], int size) {
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++){
			//use the less-than symbol to sort the array
			//in descending order
			if (array[j] < array [j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
