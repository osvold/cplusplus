#ifndef FORTUNETAX_H
#define FORTUNETAX_H

constexpr int TAX_FLOOR = 1480000;
constexpr double COMMUNAL_TAX_RATE = 0.007;
constexpr double STATE_TAX_RATE = 0.015;

double fortunetax(int income);

#endif // FORTUNETAX_H
