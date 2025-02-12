#include <iostream>
#include <list>

template <typename datatype>
class ring : public std::list<datatype> {
public:
    ring() : it(this->begin()) {}

    void add(const datatype& value) {
        this->push_back(value);
        if (this->size() == 1) {
            it = this->begin();
        }
    }

    void remove() {
        if (!this->empty()) {
            it = this->erase(it);
            if (it == this->end() && !this->empty()) {
                it = this->begin();
            }
        }
    }

    datatype& next() {
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

private:
    typename std::list<datatype>::iterator it;
};
