#include <cstdio>

class Node
{
	///
	// Private attributes
	private:
		int value;
		int column;
		int row;
		Node* next;
		Node* down;
	
	///
	// Public methods
	
	///
	// constructor
	public:
		Node()
		{
			value = 0;
			column = 0;
			row = 0;
		}

		///
		// getters
		int getValue()
		{
			return value;
		}

		int getColumn()
		{
			return column;
		}
	
		int getRow()
		{
			return row;
		}
	
		Node* getNext()
		{
			return next;
		}
	
		Node* getDown()
		{
			return down;
		}
		///
		// setters
		void setValue(int value)
		{
			this->value = value;
		}
		
		void setColumn(int column)
		{
			this->column = column;
		}
		
		void setRow(int row)
		{
			this->row = row;
		}
		
		void setNext(Node* next)
		{
			this->next = next;
		}
		
		void setDown(Node* down)
		{
			this->down = down;
		}
};

///
// Class Matrix: The Matrix
class Matrix
{
	/// 
	// private attributes
	private:
		Node* head;
		int numberOfColumns;
		int numberOfRows;
	
	///
	// public methods
	public:
		///
		// constructor
		Matrix(int columns, int rows)
		{
			head = new Node();
			numberOfRows = columns;
			numberOfColumns = rows;
			Node* tempNode;
			Node* lastInserted = head;
			head->setNext(head);
			head->setDown(head);
			
			//create the main row
			for(int i = 0; i < columns; i++)
			{
				tempNode = new Node();
				tempNode->setColumn(-1);
				tempNode->setRow(-1);
				tempNode->next = head;
				lastInserted->next = tempNode;
				lastInserted = tempNode;				
			}
			
			//create the main column
			lastInserted = head;
			for(int j = 0; j < rows; j++)
			{
				tempNode = new Node();
				tempNode->down = head;
				tempNode->setColumn(-1);
				tempNode->setRow(-1);
				lastInserted->down = head;
				lastInserted = tempNode;
			}
			
			
		}
		
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
			
			while(tempHead ->next != head)
			{
				tempHead = tempHead->getNext();
			}
		}
		
		void print()
		{
			
		}


};
