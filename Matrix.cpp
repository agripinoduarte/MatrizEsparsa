#include <cstdio>


Matrix::
void insert(int value, int column, int row)
{
	Node* newNode = new Node();
	newNode->setValue(value);
	newNode->setColumn(column);
	newNode->setRow(row);
	Node* tempHead = head;

	for(int i = 0; i <= row; i++)
	{
		tempHead = tempHead->getDown();
	}
	
	
	while(tempHead->getNext() != head)
	{
		tempHead = tempHead->getNext();
	}
	
	tempHead->setNext(newNode);
	tempHead->set
}

Matrix::		
void print()
{
	
}
