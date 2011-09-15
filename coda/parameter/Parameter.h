#ifndef PARAMETER_H
#define PARAMETER_H

#include <string>

namespace coda
{

class Parameter
{
public:
    Parameter(std::string key);
    virtual ~ Parameter();

    std::string key() const;

    bool is_set() const;

    virtual const Parameter & operator=(int value);
    virtual const Parameter & operator=(double value);
    virtual const Parameter & operator=(std::string value);
    virtual const Parameter & operator=(bool value);

    virtual operator int () const;
    virtual operator double () const;
    virtual operator std::string() const;
    virtual operator bool() const;

    virtual std::string type_str() const = 0;
    virtual std::string value_str() const = 0;
    virtual std::string str() const = 0;

protected:
    bool _is_set;

private:
    std::string _key;
};


class IntParameter:public Parameter
{
public:
    IntParameter(std::string key);
    IntParameter(std::string key, int value);
    ~IntParameter();
    const IntParameter & operator=(int value);
    operator int () const;
    std::string type_str() const;
    std::string value_str() const;
    std::string str() const;

private:
    int _value;
};

class DoubleParameter:public Parameter
{
public:
    DoubleParameter(std::string key);
    DoubleParameter(std::string key, double value);
    ~DoubleParameter();
    const DoubleParameter & operator=(double value);
    operator double () const;
    std::string type_str() const;
    std::string value_str() const;
    std::string str() const;

private:
    double _value;
};

class StringParameter:public Parameter
{
public:
    StringParameter(std::string key);
    StringParameter(std::string key, std::string value);
    ~StringParameter();
    const StringParameter & operator=(std::string value);
    operator std::string() const;
    std::string type_str() const;
    std::string value_str() const;
    std::string str() const;

private:
    std::string _value;
};

class BoolParameter:public Parameter
{
public:
    BoolParameter(std::string key);
    BoolParameter(std::string key, bool value);
    ~BoolParameter();
    const BoolParameter & operator=(bool value);
    operator bool() const;
    std::string type_str() const;
    std::string value_str() const;
    std::string str() const;

private:
    bool _value;
};



}				/* namespace coda */
#endif				/* end of include guard: PARAMETER_H */
