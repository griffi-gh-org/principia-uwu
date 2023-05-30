#ifndef _MATCHER__H_
#define _MATCHER__H_

#include "edevice.hh"
#include "i1o1gate.hh"

#define MAX_CASES 64

struct MatcherCase {
  float from;
  float to;
  float value;
};

class matcher : public i1o1gate
{
  public:
    matcher();
    edevice* solve_electronics();
    const char* get_name(){return "Matcher";}
    void init();

    MatcherCase cases[MAX_CASES],
    usize_t num_cases,
};

#endif