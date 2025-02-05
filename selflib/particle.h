#pragma once

#include "core.h"
#include "precision.h"

class Particle {
public:
  cyclone::Vector3 position;
  cyclone::Vector3 velocity;
  cyclone::Vector3 acceleration;

  cyclone::real damping;

  cyclone::real inverseMass;

};
