#include <sstream>
#include <iostream>

#include "Parameter.h"
#include "Parameters.h"

using namespace coda;

typedef std::map<std::string, Parameter*>::iterator parameter_iterator;
typedef std::map<std::string, Parameter*>::const_iterator const_parameter_iterator;

//------------------------------------------------------------------------------
Parameters::Parameters(std::string key)
	: _key(key)
{
		// Do nothing
}
//------------------------------------------------------------------------------
Parameters::~Parameters()
{
	clear();
}
//------------------------------------------------------------------------------
std::string Parameters::name() const
{
	return _key;
}
//------------------------------------------------------------------------------
void Parameters::rename(std::string key)
{
	_key = key;
}
//------------------------------------------------------------------------------
void Parameters::add(std::string key, int value)
{
	_parameters[key] = new IntParameter(key, value);
}
//------------------------------------------------------------------------------
void Parameters::add(std::string key, double value)
{
	_parameters[key] = new DoubleParameter(key, value);
}
//------------------------------------------------------------------------------
void Parameters::add(std::string key, std::string value)
{
	_parameters[key] = new StringParameter(key, value);
}
//------------------------------------------------------------------------------
void Parameters::add(std::string key, const char * value)
{
	_parameters[key] = new StringParameter(key, value);
}
//------------------------------------------------------------------------------
void Parameters::add(std::string key, bool value)
{
	_parameters[key] = new BoolParameter(key, value);
}
//------------------------------------------------------------------------------
Parameter& Parameters::operator[] (std::string key)
{
	Parameter* p = find_parameter(key);

	return *p;
}
//------------------------------------------------------------------------------
const Parameter& Parameters::operator[] (std::string key) const
{
	Parameter* p = find_parameter(key);

	return *p;
}
//------------------------------------------------------------------------------
const Parameters& Parameters::operator= (const Parameters& parameters)
{
	_key = parameters._key;

	// Copy parameters
	for (const_parameter_iterator it = parameters._parameters.begin();
	it != parameters._parameters.end(); ++it)
	{
		const Parameter& p = *it->second;
		Parameter* q = 0;
		if (p.type_str() == "int")
			q = new IntParameter(dynamic_cast<const IntParameter&>(p));
		else if (p.type_str() == "double")
			q = new DoubleParameter(dynamic_cast<const DoubleParameter&>(p));
		else if (p.type_str() == "bool")
			q = new BoolParameter(dynamic_cast<const BoolParameter&>(p));
		else if (p.type_str() == "string")
			q = new StringParameter(dynamic_cast<const StringParameter&>(p));
		_parameters[p.key()] = q;
	}
	return *this;
}
//------------------------------------------------------------------------------
bool Parameters::has_key(std::string key) const
{
	return find_parameter(key) != 0;
}
//------------------------------------------------------------------------------
std::string Parameters::str(bool verbose) const
{
	std::stringstream s;

	s << "Parameter set \"" << name() << "\" containing "
		<< _parameters.size() << " parameter(s)";

	if (verbose)
	{
		for (const_parameter_iterator it = _parameters.begin(); it != _parameters.end(); ++it)
		{
			s << "\n  * " << it->second->key() << " ["
				<< it->second->type_str() << "] "
				<< it->second->value_str();
		}
	}

	return s.str();

}
//------------------------------------------------------------------------------
Parameter* Parameters::find_parameter(std::string key) const
{
	const_parameter_iterator p = _parameters.find(key);
	if (p == _parameters.end())
		return 0;

	return p->second;
}
//------------------------------------------------------------------------------
void Parameters::clear()
{
	for (parameter_iterator it = _parameters.begin(); it != _parameters.end(); ++it)
	{
		delete it->second;
	}
	_key = "";
}
