#ifndef TRANSFORMDATA_H
#define TRANSFORMDATA_H
#include <cmath>

#define M  50
#define shx 300
#define shy 285

class TransformData
{
public:
    TransformData(const int &angle_x, const int &angle_y, const int &angle_z)
        : teta_x(angle_x), teta_y(angle_y), teta_z(angle_z)
    {}

    void rotateX(double &y, double &z) const
    {
        double teta = teta_x * M_PI / 180;
        double buf = y;
        y = cos(teta) * y - sin(teta) * z;
        z = cos(teta) * z + sin(teta) * buf;
    }

    void rotateY(double &x, double &z) const
    {
        double teta = teta_y * M_PI / 180;
        double buf = x;
        x = cos(teta) * x - sin(teta) * z;
        z = cos(teta) * z + sin(teta) * buf;
    }

    void rotateZ(double &x, double &y) const
    {
        double teta = teta_z * M_PI / 180;
        double buf = x;
        x = cos(teta) * x - sin(teta) * y;
        y = cos(teta) * y + sin(teta) * buf;
    }

    void transform(const double &x, const double &y, const double &z, int &res_x, int &res_y) const
    {
        double x_tmp = x;
        double y_tmp = y;
        double z_tmp = z;
        rotateX(y_tmp, z_tmp);
        rotateY(x_tmp, z_tmp);
        rotateZ(x_tmp, y_tmp);
        res_x = static_cast<int>(round(x_tmp * M + shx));
        res_y = static_cast<int>(round(y_tmp * M + shy));
    }

private:
    int teta_x;
    int teta_y;
    int teta_z;
};

#endif // TRANSFORMDATA_H
