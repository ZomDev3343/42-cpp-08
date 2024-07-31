# include "Span.hpp"

int main()
{
	Span s(1);
	Span s0(0);
	Span s2(2);
	Span s3(5);

	try
	{
		s.addNumber(2);
		s.addNumber(43242);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		s0.addNumber(898);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "Shortest span of s0 : " << s0.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "Longest span of s : " << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	s2.addNumber(2);
	s2.addNumber(453);

	std::cout << "Shortest span of s2 : " << s2.shortestSpan() << std::endl;
	std::cout << "Longest span of s2 : " << s2.longestSpan() << std::endl;

	s3.addNumber(213);
	s3.addNumber(21);
	s3.addNumber(890);
	s3.addNumber(56436598);
	s3.addNumber(123);

	std::cout << "Shortest span of s3 : " << s3.shortestSpan() << std::endl;
	std::cout << "Longest span of s3 : " << s3.longestSpan() << std::endl;

	Span bigsp(10000);
	std::vector<int> test(1000, 1);

	bigsp.addNumbers(test.begin(), test.end());
	std::cout << "Big span : " << std::endl << bigsp << std::endl;
	test = std::vector<int>(9001, 123);
	try
	{
		bigsp.addNumbers(test.begin(), test.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Big span : " << std::endl << bigsp << std::endl;

	std::cout << std::endl << "Subject tests " << std::endl;

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	return 0;
}
