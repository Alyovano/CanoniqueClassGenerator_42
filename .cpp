#include ".hpp"

::() {
}

::~() {
}

::(const  & x) {
	*this = x;
}

&		::operator=(const  & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}
