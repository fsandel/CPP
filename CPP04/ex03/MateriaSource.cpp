#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::~MateriaSource()
{
}

MateriaSource& MateriaSource::operator=(const MateriaSource&obj)
{
	//add rule for copy assignment constructor
	return (*this);
}

MateriaSource::MateriaSource(MateriaSource const &obj)
{
	*this = obj;
}
