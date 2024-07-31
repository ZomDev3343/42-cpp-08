#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span(unsigned int maxSize)
{
	this->_data = std::vector<int>();
	this->_maxSize = maxSize;
}

Span::Span(const Span &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	this->_data.clear();
	for (std::vector<int>::const_iterator it = rhs._data.begin(); it != rhs._data.end(); ++it)
		this->_data.push_back(*it);
	return *this;
}

std::vector<int> const &Span::getData() const
{
	return this->_data;
}

unsigned int const &Span::getMaxSize() const
{
	return this->_maxSize;
}

void Span::addNumber(int n)
{
	if (this->_data.size() == this->_maxSize)
		std::__throw_length_error("Can't add more numbers to span");
	this->_data.push_back(n);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_data.size() + std::distance(begin, end) > this->_maxSize)
		std::__throw_length_error("Span isn't large enough !");
	for (; begin != end; ++begin)
		addNumber(*begin);
}

int Span::shortestSpan()
{
	std::vector<int> cp(this->_data);
	unsigned int res = 0xffffffff;

	if (cp.size() <= 1)
		std::__throw_length_error("Can't get shortest span of a span with a length <= 1 !");
	do
	{
		if (std::abs(cp.at(0) - cp.at(1)) < res)
			res = std::abs(cp.at(0) - cp.at(1));
		if (res == 1)
			return (res);
	}while (std::next_permutation(cp.begin(), cp.end()));

	return res;
}

int Span::longestSpan()
{
	if (this->_data.size() <= 1)
		std::__throw_length_error("Can't get longest span of a span with a length <= 1 !");
	return (*(std::max_element(this->_data.begin(), this->_data.end()))
		- *(std::min_element(this->_data.begin(), this->_data.end())));
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	for (std::vector<int>::const_iterator it = i.getData().begin(); it != i.getData().end(); ++it)
		o << *it << " ";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
