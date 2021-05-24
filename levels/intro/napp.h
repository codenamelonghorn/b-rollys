#ifndef NAPP_H
#define NAPP_H

/**********************************************************************

 *                                                                    *

 *  Application Data Type Definitions:                                       *

 *                                                                    *

 *  THIS FILE WAS CREATED BY NINGEN                                   *

 *                                                                    *

 *                                                                    *

 **********************************************************************/


/***************************************************
*                                                  *
*  includes                                        *
*                                                  *
***************************************************/

#include <PR/mbi.h>

/***************************************************
*                                                  *
*   defines                                        *
*                                                  *
***************************************************/

#define	INT		0
#define	FLOAT		1
#define	POINTER	2

#define	NIN_BBOX	0
#define	NIN_BSPHERE	1
#define	NIN_BCYL	2
#define	NIN_BHULL	3
#define	NIN_BHIST	4

#define	NIN_HIST_MIN	0
#define	NIN_HIST_MAX	1


/***************************************************
*                                                  *
*  typedefs                                        *
*                                                  *
***************************************************/

typedef enum	NinBeadTypeStruct	{

	NIN_VERTEX,
	NIN_FACE,
	NIN_OBJ,
	NIN_DOF,
	NIN_XREF,
	NIN_GROUP,
	NIN_LOD,
	NIN_HEADER,
	NIN_SWITCH,
	NIN_BSP,
	NIN_LIGHT,
	NIN_UNKNOWN

} NinBeadType, *NinBeadTypePt;







typedef struct NinPointStruct {
	float	x, y, z;
} NinPoint, *NinPointPt;




typedef struct NinDLStruct {

	int	main_len;
	Gfx	*main;
	int	transparent_len;
	Gfx	*transparent;

}	NinDL, *NinDLPt;

typedef struct NinStrucStruct {

	Mtx					*matrix;
	int					num_children;
	struct NinStruct	**children;

}	NinStruc, *NinStrucPt;


typedef struct NinStruct {

	NinBeadType			type;
	NinDL				*dlist;

	void		*custom_attrib;

	NinStruc			*struc;
} Nin, *NinPt;

#endif /* NAPP_H */

