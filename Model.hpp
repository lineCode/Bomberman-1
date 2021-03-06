#ifndef __MODEL__
#define __MODEL__

#include "all.hpp"
#include "AObject.hpp"
#include "Pos3f.hpp"

namespace Model
{
  class Bomberman : public AObject
  {
  public:
    Bomberman(void);
    ~Bomberman(void);

    void initialize(void);
    void initialize(float const &, float const &, float const &);
    void update(gdl::GameClock const &, gdl::Input &);
    void draw(void);

  private:
    bool monboll;
  };

  class Bomb : public AObject
  {
  public:
    Bomb(void);
    ~Bomb(void);
    void initialize(void);
    void initialize(float const &, float const &, float const &);
    void update(gdl::GameClock const &, gdl::Input &);
    void draw(void);
  private:
    Pos3f	pos_;
    Pos3f	rot_;
    gdl::Model	model_;
  };
}

#endif
