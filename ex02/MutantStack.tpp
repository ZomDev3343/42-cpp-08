template <typename T>
MutantStack<T>::~MutantStack()
{

}

template <typename T>
MutantStack<T>::MutantStack()
{
	
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const & other) : std::stack<T>(other)
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template <typename T>
MutantStack<T> &				MutantStack<T>::operator=( MutantStack<T> const & rhs )
{
	this->c = rhs.c;
	return *this;
}
