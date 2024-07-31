#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <math.h>

class Span
{

	public:

		Span(unsigned int maxSize);
		Span( Span const & src );
		~Span();

		Span &operator=( Span const & rhs );
		std::vector<int> const&	getData() const;
		unsigned int	const&	getMaxSize() const;
		void					addNumber(int n);
		void					addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int						shortestSpan();
		int						longestSpan();

	private:
		std::vector<int>	_data;
		unsigned int		_maxSize;
		Span();
};

std::ostream &operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */
