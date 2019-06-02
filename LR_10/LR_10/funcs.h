#ifndef FUNCS_H
#define FUNCS_H

#include <cmath>

inline double f0(const double &x, const double &z)
{
    return exp(x) - exp(z);
}
inline double f1(const double &x, const double &z)
{
    return 2 * cos(x * z);
}
inline double f2(const double &x, const double &z)
{
    return x*x / 20 + z*x / 20;
}
inline double f3(const double &x, const double &z)
{
    return abs(sin(x) * sin(z));
}
inline double f4(const double &x, const double &z)
{
    return exp(sin(sqrt(x*x + z*z)));
}

#endif // FUNCS_H
