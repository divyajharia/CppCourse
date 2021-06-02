//#include <iostream>
//#include <fstream>
//using namespace std;
//
//
//
//struct Node
//{
//	int data;
//	Node* Next;
//
//	Node(int val)
//	{
//		data = val;
//		Next = NULL;
//	}
//};
//typedef Node* Nodeptr;
//
//void Insert(Nodeptr& head, int value);
//
//
//int main()
//{
//	Nodeptr head = new Node(6);
//
//	Insert(head, 89);
//	Insert(head, 99);
//	
//	Nodeptr temp;
//	temp = head;
//
//
//	while (temp != NULL)
//	{
//		cout << temp->data << endl;
//		temp = temp->Next;
//	}
//	return 0;
//}
//
//void Insert(Nodeptr &head, int value)
//{
//	Nodeptr temp = new Node(value);
//	temp->Next = head;
//	head = temp;
//
//}