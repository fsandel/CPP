#include "Floor.hpp"

void deleteMateria(void*) {
  //   if (obj) delete obj;
}

Floor::Floor() : materia_list(NULL) {}

Floor::~Floor() { ft_lstclear(&materia_list, deleteMateria); }

Floor::Floor(const Floor& obj) { *this = obj; }

Floor& Floor::operator=(const Floor&) { return *this; }

void Floor::addMateria(void* obj) {
  ft_lstadd_back(&this->materia_list, ft_lstnew(&obj));
}
