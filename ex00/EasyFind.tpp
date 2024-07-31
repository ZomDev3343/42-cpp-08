template <typename T>
EasyFind::EasyFind()
{
}

template <typename T>
EasyFind::EasyFind( const EasyFind & src )
{
}


template <typename T>
EasyFind::~EasyFind()
{
}

template <typename T>
EasyFind &				EasyFind::operator=( EasyFind const & rhs )
{
	return *this;
}

template <typename T>
std::ostream &			operator<<( std::ostream & o, EasyFind const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}
