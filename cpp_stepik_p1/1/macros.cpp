#define MAX(x, y, r) \
({ typeof (x) __x = (x), __y = (y), __r = (r); \
(__x > __y) ? ((r) = __x) : ((r) = __y);})
