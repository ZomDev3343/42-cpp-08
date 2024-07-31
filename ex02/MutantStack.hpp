#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		
		MutantStack();
		MutantStack(MutantStack const & src);
		~MutantStack();

		MutantStack &		operator=( MutantStack const & rhs );
		iterator 			begin() {return this->c.begin();}
		iterator 			end() {return this->c.end();}

};

# include "MutantStack.tpp"

#endif /* ***************************************************** MUTANTSTACK_H */