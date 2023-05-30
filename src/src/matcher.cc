#include "matcher.hh"
#include "game.hh"
#include "entity.hh"
#include "model.hh"

matcher::matcher()
{
  this->set_mesh(mesh_factory::get_mesh(MODEL_I1O1_EMPTY));
  this->set_flag(ENTITY_HAS_CONFIG, true);
}

void matcher::init() {
  MatcherCase mcase;
  mcase.from = 0.1;
  mcase.to = 1.0;
  mcase.value = 0.1;
  this->cases[0] = mcase;
  this->num_cases = 1;
}

edevice* matcher::solve_electronics() {
  if (!this->s_in[0].is_ready())
    this->s_in[0].get_connected_edevice();

  float v = this->s_in[0].get_value();

  this->s_out[0].write(v);

  return 0;
}
