//PT -- Good work, but missing 03 and 05
//PT -- 60/100

//Andrew McNEill
//CS 172
//EX05

//EX05_01
//Linear Search

//#include <iostream>
//#include <string>
//using namespace std;
//
//template <typename T>
//int linearSearch(const T list[], T key, int arraySize) 
//{
//	for (int i = 0; i < arraySize; i++)
//	{
//		if (key == list[i])
//			return i;
//
//	}
//	return -1;
//
//}
//
//
//int main()
//{
//	int intArray[5] = { 1, 2, 3, 4, 5};
//	double doubleArray[5] = { 1.5, 2.5, 3.5, 4.5, 5.5 };
//	string stringArray[5] = { "a", "b", "c", "d", "e" };
//
//
//	cout << "The number 3 is in the intArray at index:  " << linearSearch(intArray, 3, 5) << endl;
//	cout << "The number 2.5 is in the doubleArray at index: " << linearSearch(doubleArray, 2.5, 5) << endl;
//	cout << "The letter 'e' in the stringArray at index: " << linearSearch(stringArray, string("e"), 5) << endl;
//
//}

//EX05_02

//#include <iostream>
//#include <string>
//using namespace std;
//
//string boolCheck(bool x);
//
//template<typename T>
//bool isSorted(const T list[], int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		if (list[i] > list[i + 1])
//			return false;
//	}
//	return true;
//}
//
//int main() {
//	
//	int intArray1[5] = { 1,2,3,4,5 };
//	int intArray2[5] = { 2,4,1,5,3 };
//
//	double doubleArray1[5] = { 2.5, 10.5, 4.5, 1.5, 9.5 };
//	double doubleArray2[5] = { 1.2, 3.4, 5.6, 7.8, 9.1 };
//
//	string stringArray1[3] = { "alpha", "betta", "cappa" };
//	string stringArray2[3] = { "juliet", "delta", "xray" };
//
//	cout << "intArray1: " << boolCheck(isSorted(intArray1, 5)) << endl;
//	cout << "intArray2: " << boolCheck(isSorted(intArray2, 5)) << endl << endl;
//
//	cout << "doubleArray1: " << boolCheck(isSorted(doubleArray1, 5)) << endl;
//	cout << "doubleArray2: " << boolCheck(isSorted(doubleArray2, 5)) << endl << endl;
//
//	cout << "stringArray1: " << boolCheck(isSorted(stringArray1, 3)) << endl;
//	cout << "stringArray2: " << boolCheck(isSorted(stringArray2, 3)) << endl << endl;
//
//	return 0;
//}
//
//string boolCheck(bool x) {
//	if (x == 1)
//		return "Sorted!";
//	if (x == 0)
//		return "Not Sorted...";
//}

//EX05_04

//#include <iostream>
//#include <vector>
//#include <ctime>
//using namespace std;
//
//template <typename T>
//void shuffle(vector<T>& v);
//
//int main() {
//	vector<int> values = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "Shuffled values: " << endl;
//	shuffle(values);
//	for (int i = 0; i < values.size(); i++) {
//		if (i!=9)
//		{
//			cout << values[i] << ", ";
//		}
//		else
//		{
//			cout << values[i] << endl << endl;
//		}
//	}
//	return 0;
//}
//
//template <typename T>
//void shuffle(vector<T>& v)
//{
//	srand(time(NULL));
//	for (int i = 0; i < v.size(); i++)
//	{
//		int index = rand() % v.size();
//		int temp = v[i];
//		v[i] = v[index];
//		v[index] = temp;
//	}
//}
