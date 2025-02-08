
// It's a simple node with a payload of any type
template <typename datatype> 
class node {
	public:
		datatype payload;

        // Initializes payload with the default value of datatype
        node() {
			this->payload = datatype(); 
		}

        // Initializes payload with the given value
        node(datatype payload) {
			this->payload = payload;
		}
};

// It's a simple node with a payload of any type and a pointer to the next node
template <typename datatype>
class simpleNode : public node<datatype> {
	public:
		simpleNode<datatype> *next;

        // Initializes payload and sets next to nullptr
        simpleNode() : node<datatype>() {
			next = nullptr;
		}

        // Initializes payload with the given value and sets next to nullptr
		simpleNode(datatype payload) : node<datatype>(payload) {
			next = nullptr;
		}
};

// Double linked node with a payload of any type
template <typename datatype>
class doubleNode : public node<datatype> {
	public:
		doubleNode<datatype> *prev;
		doubleNode<datatype> *next;

        // Initializes payload with the given value and sets prev and next to nullptr
		doubleNode(datatype payload) : node<datatype>(payload) {
			next = nullptr;
			prev = nullptr;
		}
};
