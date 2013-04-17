#ifndef TOKU_KEY_H
#define TOKU_KEY_H

#ident "$Id$"
#ident "Copyright (c) 2007-2010 Tokutek Inc.  All rights reserved."
#ident "The technology is licensed by the Massachusetts Institute of Technology, Rutgers State University of New Jersey, and the Research Foundation of State University of New York at Stony Brook under United States of America Serial No. 11/760379 and to the patents and/or patent applications resulting from it."

#include "ybt.h"
#include "brttypes.h"

#if defined(__cplusplus) || defined(__cilkplusplus)
extern "C" {
#endif

int toku_keycompare (bytevec key1, ITEMLEN key1len, bytevec key2, ITEMLEN key2len);
void toku_test_keycompare (void) ;

int toku_builtin_compare_fun (DB *, const DBT *, const DBT*) __attribute__((__visibility__("default")));
int toku_dont_call_this_compare_fun (DB *, const DBT *, const DBT*);

#if defined(__cplusplus) || defined(__cilkplusplus)
};
#endif


#endif
