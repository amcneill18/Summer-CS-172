//PT -- this is all fine, though EX04_04 and EX04_05 are missing. And I would like to see you not have to comment things out
// and instead use functions to get this all together.

//PT -- 60/100

//Andrew McNeill
//CS 172
//EX04

//EX04_01
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int* p = NULL;
//
//	cout << "How many numbers do you want to input?" << endl;
//	int count;
//	cin >> count;
//
//	p = new int[count];
//
//	int array;
//	cout << "Input your numbers\n";
//	for (int i = 0; i < count; i++)
//	{
//		cout << count - i << " left: " << endl;
//		cin >> array; 
//		p[i] = array; 
//	}
//
//	int sum = 0;
//	for (int i = 0; i < count; i++)
//	{
//		sum += p[i];
//	}
//	double average = sum / count;
//	cout << "Average: " << average << endl;
//
//
//	int greaterThan = 0;
//
//	for (int i = 0; i < count; i++)
//	{
//		if (p[i] > average)
//		{
//			greaterThan++;
//		}
//	}
//	cout << greaterThan << " numbers are greater than the average." << endl;
//
//	delete[] p;
//}

//EX04_02
//
//#include <iostream>
//using namespace std;
//
//int* doubleCapacity(const int* list, int size);
//
//int main(){
//	const int arraySize = 3;
//	int list[arraySize];
//
//	int numbers = 0; 
//
//	for (int i = 0; i < arraySize; i++)
//	{
//		cout << "Input numbers: ";
//		cin >> numbers;
//		list[i] = numbers;
//	}
//	cout << "We are now going to double the size of the array from " << arraySize << " to " << arraySize * 2 << endl;
//
//	int* array = doubleCapacity(list, arraySize); 
//
//	cout << "The array now contains: ";
//	for (int i = 0; i < (arraySize * 2); i++)
//	{
//		cout << array[i] << endl;
//	}
//}
//
//int* doubleCapacity(const int *list, int size)
//{
//	int newSize = size * 2;
//	int* ptrArray = new int[newSize];
//
//	for (int i = 0; i < size; i++)
//	{
//		ptrArray[i] = list[i];
//	}
//
//	int moreNumbers = 0;
//	for (int i = (newSize / 2); i < newSize; i++)
//	{
//		cout << "Input more numbers: ";
//		cin >> moreNumbers;
//
//		ptrArray[i] = moreNumbers;
//	}
//
//	return ptrArray;
//	delete[] ptrArray; 
//}

//EX04_03
//
//#include <iostream>
//using namespace std;
//
//int FindSmallestElement(int* ELements, int size);
//
//int main()
//{
//	int Elements[8] = { 1, 2, 4, 5, 10, 100, 2, -22 }; 
//	int smallest = FindSmallestElement(Elements, 8);
//	cout << "Smallest element in the array: " << smallest << endl;
//}
//
//int FindSmallestElement(int* Elements, int size)
//{
//	int arraySize = size;
//	int* smallestArray = new int[arraySize];
//
//	for (int i = 0; i < arraySize; i++)
//	{
//		smallestArray[i] = Elements[i];
//	}
//	int smallest = smallestArray[1]; 
//
//	for (int i = 0; i < arraySize; i++)
//	{
//		if (smallestArray[i] < smallest)
//		{
//			smallest = smallestArray[i];
//		}
//	}
//	delete[]smallestArray;
//	return smallest;
//}

//EX04_04

