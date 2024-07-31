# include "easyfind.hpp"
# include <vector>
# include <list>

int main()
{
	std::vector<int> t;
	int				n;

	t.push_back(6546);
	t.push_back(654);
	t.push_back(56);
	t.push_back(46);

	try
	{
		n = 56;
		std::cout << easyfind< std::vector<int> >(t, n) << std::endl;
		n = 2;
		std::cout << easyfind< std::vector<int> >(t, n) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Can't find " << n << " in t" << std::endl;
	}

	std::list<int> l;

	l.push_back(346);
	l.push_back(3809);
	l.push_back(32334);
	l.push_back(3);
	
	try
	{
		n = 3;
		std::cout << easyfind< std::list<int> >(l, n) << std::endl;
		n = 347;
		std::cout << easyfind< std::list<int> >(l, n) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Can't find " << n << " in l" << std::endl;
	}

	return 0;
}