#ifndef _MEXPR__H_
#define _MEXPR__H_

#define MAX_VARS 4
static const char var_names[] = {'x', 'y', 'z', 'w'};

class mexpr {
  public:
    float variables[MAX_VARS];
    size_t variable_count;
    
    std::string expr;
    
    mexpr(std::string);
    ~mexpr();
    
    void parse();
    float solve();

  private:
};

#endif
