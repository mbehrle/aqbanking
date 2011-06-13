/* This file is auto-generated from "textkeydescr.xml" by the typemaker
   tool of Gwenhywfar. 
   Do not edit this file -- all changes will be lost! */
#ifndef TEXTKEYDESCR_H
#define TEXTKEYDESCR_H

/** @page P_AB_TEXTKEY_DESCR_PUBLIC AB_TextKeyDescr (public)
This page describes the properties of AB_TEXTKEY_DESCR
This type contains the description of a textkey. Please note that all text fields are in UTF-8.
@anchor AB_TEXTKEY_DESCR_Value
<h3>Value</h3>
<p>
</p>
<p>
Set this property with @ref AB_TextKeyDescr_SetValue, 
get it with @ref AB_TextKeyDescr_GetValue
</p>

@anchor AB_TEXTKEY_DESCR_Name
<h3>Name</h3>
<p>
This is the localized name for the text key value given above.
</p>
<p>
Set this property with @ref AB_TextKeyDescr_SetName, 
get it with @ref AB_TextKeyDescr_GetName
</p>

@anchor AB_TEXTKEY_DESCR_Descr
<h3>Descr</h3>
<p>
This is the localized description for the text key value given above.
</p>
<p>
Set this property with @ref AB_TextKeyDescr_SetDescr, 
get it with @ref AB_TextKeyDescr_GetDescr
</p>

*/
#ifdef __cplusplus
extern "C" {
#endif

typedef struct AB_TEXTKEY_DESCR AB_TEXTKEY_DESCR;

#ifdef __cplusplus
} /* __cplusplus */
#endif

#include <gwenhywfar/db.h>
#include <gwenhywfar/misc.h>
#include <gwenhywfar/list2.h>
/* headers */
#include <aqbanking/error.h>

#ifdef __cplusplus
extern "C" {
#endif


GWEN_LIST_FUNCTION_LIB_DEFS(AB_TEXTKEY_DESCR, AB_TextKeyDescr, AQBANKING_API)
AQBANKING_API AB_TEXTKEY_DESCR_LIST *AB_TextKeyDescr_List_dup(const AB_TEXTKEY_DESCR_LIST *stl);

GWEN_LIST2_FUNCTION_LIB_DEFS(AB_TEXTKEY_DESCR, AB_TextKeyDescr, AQBANKING_API)

/** Destroys all objects stored in the given LIST2 and the list itself
*/
AQBANKING_API void AB_TextKeyDescr_List2_freeAll(AB_TEXTKEY_DESCR_LIST2 *stl);

/** Creates a new object.
*/
AQBANKING_API AB_TEXTKEY_DESCR *AB_TextKeyDescr_new(void);
/** Creates an object from the data in the given GWEN_DB_NODE
*/
AQBANKING_API AB_TEXTKEY_DESCR *AB_TextKeyDescr_fromDb(GWEN_DB_NODE *db);
/** Creates and returns a deep copy of thegiven object.
*/
AQBANKING_API AB_TEXTKEY_DESCR *AB_TextKeyDescr_dup(const AB_TEXTKEY_DESCR*st);
/** Destroys the given object.
*/
AQBANKING_API void AB_TextKeyDescr_free(AB_TEXTKEY_DESCR *st);
/** Increments the usage counter of the given object, so an additional free() is needed to destroy the object.
*/
AQBANKING_API void AB_TextKeyDescr_Attach(AB_TEXTKEY_DESCR *st);
/** Reads data from a GWEN_DB.
*/
AQBANKING_API int AB_TextKeyDescr_ReadDb(AB_TEXTKEY_DESCR *st, GWEN_DB_NODE *db);
/** Stores an object in the given GWEN_DB_NODE
*/
AQBANKING_API int AB_TextKeyDescr_toDb(const AB_TEXTKEY_DESCR*st, GWEN_DB_NODE *db);
/** Returns 0 if this object has not been modified, !=0 otherwise
*/
AQBANKING_API int AB_TextKeyDescr_IsModified(const AB_TEXTKEY_DESCR *st);
/** Sets the modified state of the given object
*/
AQBANKING_API void AB_TextKeyDescr_SetModified(AB_TEXTKEY_DESCR *st, int i);


/**
* Returns the property @ref AB_TEXTKEY_DESCR_Value
*/
AQBANKING_API int AB_TextKeyDescr_GetValue(const AB_TEXTKEY_DESCR *el);
/**
* Set the property @ref AB_TEXTKEY_DESCR_Value
*/
AQBANKING_API void AB_TextKeyDescr_SetValue(AB_TEXTKEY_DESCR *el, int d);

/**
* Returns the property @ref AB_TEXTKEY_DESCR_Name
*/
AQBANKING_API const char *AB_TextKeyDescr_GetName(const AB_TEXTKEY_DESCR *el);
/**
* Set the property @ref AB_TEXTKEY_DESCR_Name
*/
AQBANKING_API void AB_TextKeyDescr_SetName(AB_TEXTKEY_DESCR *el, const char *d);

/**
* Returns the property @ref AB_TEXTKEY_DESCR_Descr
*/
AQBANKING_API const char *AB_TextKeyDescr_GetDescr(const AB_TEXTKEY_DESCR *el);
/**
* Set the property @ref AB_TEXTKEY_DESCR_Descr
*/
AQBANKING_API void AB_TextKeyDescr_SetDescr(AB_TEXTKEY_DESCR *el, const char *d);


#ifdef __cplusplus
} /* __cplusplus */
#endif


#endif /* TEXTKEYDESCR_H */
