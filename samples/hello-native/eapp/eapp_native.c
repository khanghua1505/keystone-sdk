//******************************************************************************
// Copyright (c) 2018, The Regents of the University of California (Regents).
// All Rights Reserved. See LICENSE for license details.
//------------------------------------------------------------------------------
#include <keystone/enclave/eapp_utils.h>
#include <keystone/glibc/string.h>
#include <keystone/edge/edge_call.h>
#include <keystone/enclave/syscall.h>

#define OCALL_PRINT_STRING 1

unsigned long ocall_print_string(char* string);

int main(){

  ocall_print_string("Hello World");

  EAPP_RETURN(0);
}

unsigned long ocall_print_string(char* string){
  unsigned long retval;
  ocall(OCALL_PRINT_STRING, string, strlen(string)+1, &retval ,sizeof(unsigned long));
  return retval;
}
