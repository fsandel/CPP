#pragma once

#include "List.hpp"

class Floor {
 public:
  Floor();
  ~Floor();
  Floor(const Floor& obj);

  Floor& operator=(const Floor& obj);
  void addMateria(void* obj);

 private:
  t_list* materia_list;
};

extern Floor FLOOR;
