#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{

	public:

		Span(int n);
		Span( Span const & src );
		~Span();

		Span &operator=( Span const & rhs );

	private:
		std::vector<int>	data;

		Span();
};

std::ostream &operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */