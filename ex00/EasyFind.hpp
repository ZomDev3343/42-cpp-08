#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string.h>
# include "EasyFind.tpp"

template <typename T>
class EasyFind
{

	public:

		EasyFind();
		EasyFind( EasyFind const & src );
		~EasyFind();

		EasyFind &		operator=( EasyFind const & rhs );

	private:

};

template <typename T>
std::ostream &			operator<<( std::ostream & o, EasyFind<T> const & i );

#endif /* ******************************************************** EASYFIND_H */
