#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
}

IMateriaSource::~IMateriaSource()
{
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource&obj)
{
	//add rule for copy assignment constructor
	return (*this);
}

IMateriaSource::IMateriaSource(IMateriaSource const &obj)
{
	*this = obj;
}
