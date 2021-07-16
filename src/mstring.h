#ifndef _H_MSTRING
#define _H_MSTRING

typedef struct mstring {
    int cap, len;
    char *cstr;
} mstring_t;

void mstring_init(mstring_t *str, const char *cstr);
void mstring_initf(mstring_t *str, const char *format, ...);
void mstring_deinit(mstring_t *str);
void mstring_append_str(mstring_t *str, mstring_t *str2);
void mstring_append_cstr(mstring_t *str, const char *cstr);

#endif