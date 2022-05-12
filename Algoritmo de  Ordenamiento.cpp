// Algoritmos.cpp 
// Isra Morán P.

#include <iostream>
using namespace std;

void merge(int array[], int const left, int const mid, int const right) { }
void heapify(int arr[], int n, int i) { }
int partition(int arr[], int low, int high) { }


int main()
{

	int Opciones;

	do
	{

		// Menú para seleccionar el metodo
		cout << "          Menu         " << endl;
		cout << "Selecciona el metodo que deseas utilizar: " << endl;
		cout << "1.- Bubblesort" << endl;
		cout << "2.- Insertsort" << endl;
		cout << "3.- Quicksort" << endl;
		cout << "4.- Mergesort" << endl;
		cout << "5.- Heapsort" << endl;
		cin >> Opciones;

		// Switch de las opciones
		switch (Opciones)
		{

	// Método Quicksort
		case 1:
			
			quickSort;
			
			break;

	// Método Mergesort
		case 2:
			
			mergeSort;
			
			break;

	// Método Bubblesort
		case 3:
			
			bubbleSort;
			
			break;

	// Método Insertionsort
		case 4:
			
			insertionSort;
			
			break;

	// Método Heapsort
		case 5:
			
			heapSort;
			
			break;

		default: cout << "Opcion no Disponible" << endl;

		}

	} while (Opciones < 5);

	return Opciones;

}

// Método Quicksort
void quickSort(int arr[], int low, int high)
{

	if (low < high)
	{

		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);

	}

}

// Método Mergesort
void mergeSort(int array[], int const begin, int const end)
{

	if (begin >= end)
		return;

	auto mid = begin + (end - begin) / 2;
	mergeSort(array, begin, mid);
	mergeSort(array, mid + 1, end);
	merge(array, begin, mid, end);

}

// Método Bubblesort
void bubbleSort(int arr[], int n)
{

	int i, j;
	for (i = 0; i < n - 1; i++)

		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);

}

// Método Insertionsort
void insertionSort(int arr[], int n)
{

	int i, key, j;
	for (i = 1; i < n; i++)

	{

		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;

	}

}

// Método Heapsort
void heapSort(int arr[], int n)
{

	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	for (int i = n - 1; i > 0; i--) {
		
		swap(arr[0], arr[i]);

		heapify(arr, i, 0);
	}

}