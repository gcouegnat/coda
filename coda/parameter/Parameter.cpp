#include <sstream>
#include "Parameter.h"

using namespace coda;

//-----------------------------------------------------------------------------
// class Parameter
//-----------------------------------------------------------------------------
Parameter::Parameter(std::string key): _is_set(false), _key(key) {
// Do nothing
}

//-----------------------------------------------------------------------------
Parameter::~Parameter() {
// Do nothing
}

//-----------------------------------------------------------------------------
std::string Parameter::key()  const {
  return _key;
}

//-----------------------------------------------------------------------------
bool
Parameter::is_set() const {
  return _is_set;
}

//-----------------------------------------------------------------------------
const Parameter&
Parameter::operator= (int value) {
  return *this;
}

//-----------------------------------------------------------------------------
const Parameter&
Parameter::operator= (double value) {
  return *this;
}

//-----------------------------------------------------------------------------
const Parameter&
Parameter::operator= (std::string value) {
  return *this;
}

//-----------------------------------------------------------------------------
const Parameter&
Parameter::operator= (bool value) {
  return *this;
}

//-----------------------------------------------------------------------------
Parameter::operator int () const {
  return 0;
}
//-----------------------------------------------------------------------------
Parameter::operator double() const {
  return 0;
}

//-----------------------------------------------------------------------------
Parameter::operator std::string()  const {
  return 0;
}

//-----------------------------------------------------------------------------
Parameter::operator bool ()  const {
  return 0;
}

//-----------------------------------------------------------------------------
// class IntParameter
//-----------------------------------------------------------------------------
IntParameter::IntParameter(std::string key): Parameter(key), _value(0) {
// Do nothing
}

//-----------------------------------------------------------------------------
IntParameter::IntParameter(std::string key, int value): Parameter(key),
  _value(value) {
  _is_set = true;
}

//-----------------------------------------------------------------------------
IntParameter::~IntParameter() {
// Do nothing
}

//-----------------------------------------------------------------------------
const IntParameter&
IntParameter::operator= (int value) {
// Set value
  _value = value;
  _is_set = true;
  return *this;
}

//-----------------------------------------------------------------------------
IntParameter::operator int ()
const {
  return
    _value;
}
//-----------------------------------------------------------------------------
std::string
IntParameter::type_str() const {
  return "int";
}

//-----------------------------------------------------------------------------
std::string IntParameter::value_str()  const {
  std::stringstream s;
  s << _value;
  return s.str();
}

//-----------------------------------------------------------------------------
std::string IntParameter::str()  const {
  std::stringstream s;
  s << "<int-valued parameter named \""
    << key() << "\" with value " << _value << ">";
  return s.str();
}

//-----------------------------------------------------------------------------
// class DoubleParameter
//-----------------------------------------------------------------------------
DoubleParameter::DoubleParameter(std::string key): Parameter(key), _value(0) {
// Do nothing
}

//-----------------------------------------------------------------------------
DoubleParameter::DoubleParameter(std::string key, double value): Parameter(key),
  _value(value) {
  _is_set = true;
}

//-----------------------------------------------------------------------------
DoubleParameter::~DoubleParameter() {
// Do nothing
}

//-----------------------------------------------------------------------------
const DoubleParameter&
DoubleParameter::operator= (double value) {
// Set value
  _value = value;
  _is_set = true;
  return *this;
}

//-----------------------------------------------------------------------------
DoubleParameter::operator double()
const {
  return
    _value;
}
//-----------------------------------------------------------------------------
std::string
DoubleParameter::type_str() const {
  return "double";
}

//-----------------------------------------------------------------------------
std::string DoubleParameter::value_str()  const {
  std::stringstream s;
  s << _value;
  return s.str();
}

//-----------------------------------------------------------------------------
std::string DoubleParameter::str()  const {
  std::stringstream s;
  s << "<double-valued parameter named \""
    << key() << "\" with value " << _value << ">";
  return s.str();
}

//-----------------------------------------------------------------------------
// class StringParameter
//-----------------------------------------------------------------------------
StringParameter::StringParameter(std::string key): Parameter(key), _value(0) {
// Do nothing
}

//-----------------------------------------------------------------------------
StringParameter::StringParameter(std::string key, std::string value): Parameter(key),
  _value
  (value) {
  _is_set = true;
}

//-----------------------------------------------------------------------------
StringParameter::~StringParameter() {
// Do nothing
}

//-----------------------------------------------------------------------------
const StringParameter&
StringParameter::operator= (std::string value) {
// Set value
  _value = value;
  _is_set = true;
  return *this;
}

//-----------------------------------------------------------------------------
StringParameter::operator std::string()  const {
  return _value;
}

//-----------------------------------------------------------------------------
std::string StringParameter::type_str()  const {
  return "string";
}

//-----------------------------------------------------------------------------
std::string StringParameter::value_str()  const {
  return _value;
}

//-----------------------------------------------------------------------------
std::string StringParameter::str()  const {
  std::stringstream s;
  s << "<string-valued parameter named \""
    << key() << "\" with value " << _value << ">";
  return s.str();
}

//-----------------------------------------------------------------------------
// class BoolParameter
//-----------------------------------------------------------------------------
BoolParameter::BoolParameter(std::string key): Parameter(key), _value(0) {
// Do nothing
}

//-----------------------------------------------------------------------------
BoolParameter::BoolParameter(std::string key, bool value): Parameter(key),
  _value(value) {
  _is_set = true;
}

//-----------------------------------------------------------------------------
BoolParameter::~BoolParameter() {
// Do nothing
}

//-----------------------------------------------------------------------------
const BoolParameter&
BoolParameter::operator= (bool value) {
// Set value
  _value = value;
  _is_set = true;
  return *this;
}

//-----------------------------------------------------------------------------
BoolParameter::operator bool ()  const {
  return _value;
}

//-----------------------------------------------------------------------------
std::string BoolParameter::type_str()  const {
  return "bool";
}

//-----------------------------------------------------------------------------
std::string BoolParameter::value_str()  const {
  std::stringstream s;
  s << _value;
  return s.str();
}

//-----------------------------------------------------------------------------
std::string BoolParameter::str()  const {
  std::stringstream s;
  s << "<bool-valued parameter named \""
    << key() << "\" with value " << _value << ">";
  return s.str();
}
