#include "dxlist.cpp"

template <typename datatype>
class ring : public dxlist<datatype> {
	public:
		void add(const datatype& value);
		void remove();
		datatype& next();

	private:
		typename dxlist<datatype>::iterator it;
};

// Allows the user to add a new value to the ring
template <typename datatype>
void ring<datatype>::add(const datatype& value) {
	this->push_back(value);
	if (this->size() == 1) {
		it = this->begin();
	}
}

// Allows the user to remove the current value from the ring
template <typename datatype>
void ring<datatype>::remove() {
	if (!this->empty()) {
		it = this->erase(it);
		if (it == this->end() && !this->empty()) {
			it = this->begin();
		}
	}
}

// Allows the user to get the next value in the ring in a circular way
template <typename datatype>
datatype& ring<datatype>:: next() {
	if (this->empty()) {
		throw std::out_of_range("List is empty");
	}
	if (it == this->end()) {
		it = this->begin();
	}
	datatype& value = *it;
	++it;
	return value;
}
