/* This file is auto-generated from "pin.xml" by the typemaker
   tool of Gwenhywfar. 
   Do not edit this file -- all changes will be lost! */
#ifndef PIN_P_H
#define PIN_P_H

#include "pin_l.h"

struct AB_PIN {
  GWEN_LIST_ELEMENT(AB_PIN)
  int _usage;
  int _modified;

  char *token;
  char *value;
  char *hash;
  char *status;
};







#endif /* PIN_P_H */
