#include "Floor.hpp"

Floor::Floor() : materia_list(NULL) {}

Floor::~Floor() {
  while (this->materia_list) {
    if (this->materia_list->content)
      ::operator delete(this->materia_list->content);
    t_list* next = this->materia_list->next;
    delete this->materia_list;
    this->materia_list = next;
  }
}

Floor::Floor(const Floor& obj) { *this = obj; }

Floor& Floor::operator=(const Floor&) { return *this; }

void Floor::addMateria(AMateria* materia) {
  ft_lstadd_back(&this->materia_list, ft_lstnew(materia));
}

void Floor::deleteMateria(AMateria* materia) {
  t_list* copy = this->materia_list;
  while (copy) {
    if (copy->content == materia) {
      copy->content = NULL;
      return;
    }
    copy = copy->next;
  }
}
