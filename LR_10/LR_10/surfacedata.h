#ifndef SURFACEDATA_H
#define SURFACEDATA_H

#include "funcs.h"

using func = double (*)(const double &, const double &);

class SurfaceData
{
public:
    void setXRange(const double &beg, const double &end, const double &step)
    {
        x_beg = beg;
        x_end = end;
        x_step = step;
    }

    void setZRange(const double &beg, const double &end, const double &step)
    {
        z_beg = beg;
        z_end = end;
        z_step = step;
    }

    double getBegX() const
    {
        return x_beg;
    }

    double getEndX() const
    {
        return x_end;
    }

    double getStepX() const
    {
        return x_step;
    }

    double getBegZ() const
    {
        return z_beg;
    }

    double getEndZ() const
    {
        return z_end;
    }

    double getStepZ() const
    {
        return z_step;
    }

    func getFunc() const
    {
        return cur_func;
    }

    void setFunc(const int &index)
    {
        switch (index)
        {
        case 0:
            cur_func = f0;
            break;
        case 1:
            cur_func = f1;
            break;
        case 2:
            cur_func = f2;
            break;
        case 3:
            cur_func = f3;
            break;
        case 4:
            cur_func = f4;
            break;
        }
    }

private:
    double x_beg;
    double x_end;
    double x_step;
    double z_beg;
    double z_end;
    double z_step;
    func cur_func;

};
#endif // SURFACEDATA_H
