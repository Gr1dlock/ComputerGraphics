#ifndef FUNCS_H
#define FUNCS_H

#include <cmath>

inline double f0(const double &x, const double &z)
{
    return z*z / 5 - x*x / 5;
}
inline double f1(const double &x, const double &z)
{
    return exp(sin(sqrt(x*x + z*z)));
}
inline double f2(const double &x, const double &z)
{
    return sin(x) * cos(z);
}
inline double f3(const double &x, const double &z)
{
    return 2 * cos(x * z);
}
inline double f4(const double &x, const double &z)
{
    return abs(sin(x) * sin(z));
}

#endif // FUNCS_H
