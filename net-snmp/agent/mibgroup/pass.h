/*
 *  pass: pass through extensiblity
 */
#ifndef _MIBGROUP_PASS_H
#define _MIBGROUP_PASS_H

config_require(extensible read_config util_funcs)

int setPass __P((int, u_char *, u_char, int, u_char *,oid *, int));
unsigned char *var_extensible_pass __P((struct variable *, oid *, int *, int, int *, int (**write) __P((int, u_char *, u_char, int, u_char *, oid *, int)) ));

/* config file parsing routines */
void pass_free_config __P((void));
void pass_parse_config __P((char *, char *));
config_parse_dot_conf("pass", pass_parse_config, pass_free_config)

#include "mibdefs.h"

#endif /* _MIBGROUP_PASS_H */
