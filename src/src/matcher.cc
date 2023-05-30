#include "matcher.hh"
#include "game.hh"
#include "entity.hh"
#include "model.hh"

matcher::matcher()
{
  this->set_mesh(mesh_factory::get_mesh(MODEL_I1O1_EMPTY));
}

edevice*
matcher::solve_electronics()
{
  if (!this->s_in[0].is_ready())
    this->s_in[0].get_connected_edevice();

  float v = this->s_in[0].get_value();

  this->s_out[0].write(v);

  return 0;
}
