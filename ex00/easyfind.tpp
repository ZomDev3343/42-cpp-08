template <typename T>
int easyfind(T t, int n)
{
	typename T::iterator it = std::find(t.begin(), t.end(), n);
	if (*it == n)
		return n;
	throw std::exception();
	return 0;
}