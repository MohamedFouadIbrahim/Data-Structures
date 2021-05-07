#include <iostream>
using namespace std;
const int MAX_SIZE = 3;
template <class t>

#pragma region // Array Impelementaion

// class stack
// {
// 	int top;
// 	t item[MAX_SIZE];

// public:
// stack() : top(-1) {}

// 	bool isEmpty()
// 	{
// 		return top < 0;
// 	}

// 	void push(t Element)
// 	{
// 		if (top >= MAX_SIZE - 1)
// 		{
// 			cout << "Stack full on push";
// 		}
// 		else
// 		{
// 			top++;
// 			item[top] = Element;
// 		}
// 	}

// 	void pop()
// 	{
// 		if (isEmpty())
// 			cout << "stack empty on pop";
// 		else
// 			top--;
// 	}

// 	void pop(t &Element)
// 	{
// 		if (isEmpty())
// 			cout << "stack empty on pop";
// 		else
// 		{
// 			Element = item[top];
// 			top--;
// 		}
// 	}

// 	void Peek(t &stackTop)
// 	{
// 		if (isEmpty())
// 			cout << "stack empty on getTop";
// 		else
// 		{
// 			stackTop = item[top];
// 			cout << stackTop << endl;
// 		}
// 	}

// 	void print()
// 	{
// 		cout << "[ ";
// 		for (int i = top; i >= 0; i--)
// 		{
// 			cout << item[i] << " ";
// 		}
// 		cout << "]";
// 		cout << endl;
// 	}

// };

// Usage

// stack<int>s;
// 	s.push(5);
// 	s.push(15);
// 	s.push(20);
// 	 int f = 0;
// 	s.Peek(f);

#pragma endregion

#pragma region // Linked List Impelementation

// class stack
// {

// 	struct node
// 	{
// 		t item;
// 		node *next;
// 	};

// 	node *top;

// public:
// 	stack()
// 	{
// 		top = NULL;
// 	}

// 	void push(t item)
// 	{

// 		node *newNode = new node;
// 		newNode->item = item;
// 		newNode->next = top;
// 		top = newNode;
// 	}

// 	void print()
// 	{
// 		node *temp = top;

// 		while (temp != NULL)
// 		{
// 			cout << temp->item;
// 			cout << "\n";
// 			temp = temp->next;
// 		}
// 	}

// 	bool isEmpty()
// 	{
// 		return top == NULL;
// 	}

// 	void pop()
// 	{

// 		if (isEmpty())
// 		{
// 			cout << "Stack Is Empty";
// 		}
// 		else
// 		{

// 			node *temp = top;
// 			top = top->next;
// 			// temp->next = NULL;
// 			delete temp;
// 		}
// 	}
// 	void pop(t stackTop)
// 	{

// 		if (isEmpty())
// 		{
// 			cout << "Stack Is Empty";
// 		}
// 		else
// 		{

// 			stackTop = top->item;
// 			node *temp = top;
// 			top = top->next;
// 			temp->next = NULL;
// 			delete temp;
// 		}
// 	}

// 	void peek(t stackTop)
// 	{
// 		if (isEmpty())
// 			cout << "stack empty on getTop";
// 		else
// 			stackTop = top->item;
// 		cout << "\nTop Element of the stack is " << stackTop;
// 		cout << endl;
// 	}
// };

// usage

// stack<int> fo;
// fo.push(8);
// fo.push(9);
// fo.push(10);
// fo.pop();
// fo.print();

#pragma endregion

#pragma region binarySearch
// int binarySearch(int arr[], int n, int size);

// int binarySearch(int arr[], int n, int size)
// {

//     int start = 0;
//     int middle;
//     int end = size - 1;

//     while (end >= start)
//     {

//         middle = start + (end - start) / 2;

//         if (arr[middle] == n)
//         {
//             return middle;
//         }
//         else if (arr[middle] > n)
//         {
//             end = middle - 1;
//         }
//         else
//         {
//             start = middle + 1;
//         }
//         /* code */
//     }

//     return -1;
// }

#pragma endregion

#pragma region // bubbleSort

// void bubbleSort(int arr[]);

// void bubbleSort(int arr[], int length)
// {

//     int i = 0;
//     bool isSwapped = true;

//     while (isSwapped)
//     {
//         isSwapped = false;

//         for (int j = 0; j < length - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 isSwapped = true;
//             }
//         }
//         i++;
//     }
// }

#pragma endregion

#pragma region // selectionSort

// void selectionSort(int arr[]);

// void selectionSort(int arr[], int length)
// {

//     int t, smallestElementIndex = 0;

//     while (t + 1 < length)
//     {
//         for (int i = t; i < length; i++) // find small one
//         {
//             if (arr[smallestElementIndex] > arr[i])
//             {
//                 smallestElementIndex = i;
//             }
//         }

//         // replace it at the first
//         int temp = arr[t];
//         arr[t] = arr[smallestElementIndex];
//         arr[smallestElementIndex] = temp;
//         t++;
//         smallestElementIndex = t;
//     }
// }

#pragma endregion

int main(int argc, char *argv[])
{
}