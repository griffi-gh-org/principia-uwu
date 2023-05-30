#ifndef _MATCHER__H_
#define _MATCHER__H_

#include "edevice.hh"
#include "i1o1gate.hh"

class matcher : public i1o1gate
{
  public:
    matcher();
    edevice* solve_electronics();
    const char* get_name(){return "Matcher";}
};

#endif