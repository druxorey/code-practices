#include <list>

#pragma once

// Template class representing a cell in the sparse matrix
template<typename datatype>
class Cell {
	public:
		unsigned int row; // Row index of the cell
		unsigned int column; // Column index of the cell
		datatype value; // Value stored in the cell

		// Default constructor initializing row and column to 0
		Cell() : row(0), column(0) {}

		// Constructor initializing row and column with given indices
		Cell(unsigned int rowIndex, unsigned int columnIndex) : row(rowIndex), column(columnIndex) {}

		// Constructor initializing row, column, and value with given parameters
		Cell(unsigned int rowIndex, unsigned int columnIndex, datatype value) : Cell(rowIndex, columnIndex), value(value) {}
};

// Template class representing a row in the sparse matrix
template<typename datatype>
class Row {
	public:
		unsigned int index; // Index of the row
		std::list<Cell<datatype>> cells; // List of cells in the row

		// Default constructor initializing index to 0
		Row() : index(0) {}

		// Constructor initializing index with given parameter
		Row(unsigned int index) : index(index) {}
};

// Template class representing a sparse matrix
template<typename datatype>
class SparseMatrix {
	public:
		// Constructor initializing the null value
		SparseMatrix(datatype nullValue) : nullValue(nullValue) {}

		// Method to get the value at a specific row and column
		datatype get(int rowIndex, int columnIndex);

		// Method to set the value at a specific row and column
		void set(int rowIndex, int columnIndex, datatype value);

	private:
		datatype nullValue; // Value to return when the element does not exist
		std::list<Row<datatype>> rows; // List of rows in the matrix

		// Method to get a pointer to a row by its index
		Row<datatype>* getRow(int index);

		// Method to get a pointer to a cell by its row and column
		Cell<datatype>* getCell(Row<datatype>* row, int column);
};

// Implementation of the get method
template<typename datatype>
datatype SparseMatrix<datatype>::get(int rowIndex, int columnIndex) {
	Row<datatype>* thisRow = getRow(rowIndex);

	// Return nullValue if the row does not exist
	if (thisRow == nullptr) return this->nullValue;

	Cell<datatype>* thisCell = getCell(thisRow, columnIndex);

	// Return nullValue if the cell does not exist
	if (thisCell == nullptr) return this->nullValue;

	// Return the value of the cell
	return thisCell->value;
}

// Implementation of the set method
template<typename datatype>
void SparseMatrix<datatype>::set(int rowIndex, int columnIndex, datatype value) {
	Row<datatype>* thisRow = getRow(rowIndex);
	
	// If the row does not exist, create a new row and add it to the list
	if (thisRow == nullptr) {
		Row<datatype> newRow(rowIndex);
		this->rows.push_back(Row<datatype>(rowIndex)); // Insert the new row into the list of rows
		thisRow = &this->rows.back(); // Get the reference to the created row
	}

	Cell<datatype>* thisCell = getCell(thisRow, columnIndex);

	// If the cell does not exist, create a new cell and add it to the list
	if (thisCell == nullptr) {
		Cell<datatype> newCell(rowIndex, columnIndex, this->nullValue);
		thisRow->cells.push_back(Cell<datatype>(rowIndex, columnIndex, this->nullValue)); // Insert the cell into the list of cells in the row
		thisCell = &thisRow->cells.back(); // Get the reference to the created cell
	}

	// Set the value of the cell
	thisCell->value = value;
}

// Implementation of the getRow method
template<typename datatype>
Row<datatype>* SparseMatrix<datatype>::getRow(int index) {
	// Iterate through the rows to find the row with the given index
	for (auto& row : rows) if (row.index == index) return &row;
	return nullptr;
}

// Implementation of the getCell method
template<typename datatype>
Cell<datatype>* SparseMatrix<datatype>::getCell(Row<datatype>* row, int column) {
	if (row == nullptr) return nullptr;

	// Iterate through the cells to find the cell with the given column
	for (auto& cell : row->cells) {
		if (cell.column == column) return &cell;
	}

	return nullptr;
}
