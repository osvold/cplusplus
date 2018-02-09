#include <cstdio>
#include <cstdarg>

// first argument is in count of remaining args
// ... remaining args are double for average
double average(const int count, ...) {
    va_list ap;
    int i;
    double total = 0.0;

    va_start(ap, count);
    for(i = 0; i < count; ++i) {
        total += va_arg(ap, double);
    }
    va_end(ap);
    return total / count;
}

// works like printf, format plus args
int message(const char * fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int rc = vfprintf(stdout, fmt, ap);
    puts("");
    va_end(ap);
    return rc;
}
