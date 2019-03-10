import re
from math import sqrt


def is_triangle(x1, y1, x2, y2, x3, y3):  # Функция проверки на вырожденность
    if (x3 - x1) * (y2 - y1) == (y3 - y1) * (x2 - x1):
        return False
    else:
        return True


def is_in_triangle(x1, y1, x2, y2, x3, y3, xp, yp):  # Функция проверки принадлежности треугольнику
    a = (x1 - xp) * (y2 - y1) - (x2 - x1) * (y1 - yp)
    b = (x2 - xp) * (y3 - y2) - (x3 - x2) * (y2 - yp)
    c = (x3 - xp) * (y1 - y3) - (x1 - x3) * (y3 - yp)
    if (a >= 0 and b >= 0 and c >= 0) or (a <= 0 and b <= 0 and c <= 0):
        return True
    else:
        return False


def find_center(x1, y1, x2, y2, x3, y3):  # Функция нахождения центра описанной окружности
    a = 2 * (x2 - x1)
    b = 2 * (y2 - y1)
    c = x2**2 + y2**2 - x1**2 - y1**2
    d = 2 * (x3 - x2)
    e = 2 * (y3 - y2)
    f = x3**2 + y3**2 - x2**2 - y2**2
    p = a * e - d * b
    xc = (c * e - b * f) / p
    yc = (a * f - c * d) / p
    r = (x1 - xc)**2 + (y1 - yc)**2
    return xc, yc, r


def is_in_circle(xc, yc, r, xp, yp):  # Функция проверки принадлежности окружности
    if (xc - xp)**2 + (yc - yp)**2 <= r:
        return True
    else:
        return False


def is_digit(text):  # Функция проверки на число
    match = re.fullmatch(r'[-+]?(?:\d+(?:\.\d*)?|\.\d+)', text)
    return bool(match)


def scale(x, y, xmin, ymax, k, xn, yn):  # Функция масштабирования
    xr = round(xn + (x - xmin) * k)
    yr = round(yn + (ymax - y) * k)
    return xr, yr


def find_coef(xc, yc, r):  # Функция нахождения коэффициента масштабирования
    r = sqrt(r)
    xmin = xc - r
    ymax = yc + r
    k = 500 / (2 * r)
    return k, xmin, ymax


def find_res(table):  # Функция поиска треугольника
    res = []
    dots = []
    min_count = len(table) + 1
    for i in range(len(table) - 2):
        for j in range(i + 1, len(table) - 1):
            for k in range(j + 1, len(table)):
                if is_triangle(table[i][1], table[i][2], table[j][1],
                               table[j][2], table[k][1], table[k][2]):
                    inside = 0
                    outside = 0
                    xc, yc, r = find_center(table[i][1], table[i][2],
                                            table[j][1], table[j][2],
                                            table[k][1], table[k][2])
                    for n in range(len(table)):
                        if n != j and n != i and n != k:
                            if is_in_triangle(table[i][1], table[i][2],
                                              table[j][1], table[j][2],
                                              table[k][1], table[k][2],
                                              table[n][1], table[n][2]):
                                dots.append(table[n])
                                inside += 1
                            elif is_in_circle(xc, yc, r, table[n][1],
                                              table[n][2]):
                                dots.append(table[n])
                                outside += 1
                    if abs(inside - outside) < min_count:
                        min_count = abs(inside - outside)
                        res.clear()
                        res.append(table[i])
                        res.append(table[j])
                        res.append(table[k])
                        res.extend(dots)
                    dots.clear()
    return res, min_count
