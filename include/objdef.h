#ifndef __OBJDEF_H__
#define __OBJDEF_H__

#include <stdint.h>
#include "sysdef.h"
/*-----------------------------------------------------------------------------
 * Definition of PLC Object File Header
 *---------------------------------------------------------------------------*/
typedef struct {
	char magic[MAGIC_SIZE]; /* magic number */
	uint8_t type;           /* type of object file: 32BIT | 64BIT */
	uint8_t order;          /* byte order: LITTLE-ENDIAN | BIG-ENDIAN */
	uint8_t version;        /* version of object file (default: 1)*/
	uint8_t machine;        /* CPU platform */
} OBJ_HEADER;


#endif
