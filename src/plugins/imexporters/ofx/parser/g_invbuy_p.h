/***************************************************************************
 $RCSfile$
 -------------------
 begin       : Fri Apr 17 2009
 copyright   : (C) 2009 by Stephen R. Besch (C) 2008 by Martin Preuss
 email       : sbesch@buffalo.edu martin@libchipcard.de

 ***************************************************************************
 *          Please see toplevel file COPYING for license details           *
 ***************************************************************************/


#ifndef AIO_OFX_G_INVBUY_P_H
#define AIO_OFX_G_INVBUY_P_H


#include "g_invbuy_l.h"

typedef struct AIO_OFX_GROUP_INVBUY AIO_OFX_GROUP_INVBUY;
struct AIO_OFX_GROUP_INVBUY {
  char *currentElement;
  char * datum[iinvbuylastget];
};

static void GWENHYWFAR_CB AIO_OfxGroup_INVBUY_FreeData(void *bp, void *p);
static int AIO_OfxGroup_INVBUY_StartTag(AIO_OFX_GROUP *g, const char *tagName);
static int AIO_OfxGroup_INVBUY_AddData(AIO_OFX_GROUP *g, const char *data);
static int AIO_OfxGroup_INVBUY_EndSubGroup(AIO_OFX_GROUP *g, AIO_OFX_GROUP *sg);

int AIO_OfxGroup_INVBUY_SortTag(const char * s, const char ** sTags, int max);

#endif

