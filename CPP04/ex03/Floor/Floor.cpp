#include "Floor.hpp"

Floor::Floor() : materia_list(NULL) {}

Floor::~Floor() {
  while (this->materia_list) {
    if (this->materia_list->content) delete (this->materia_list->content);
    this->materia_list = this->materia_list->next;
  }
}

Floor::Floor(const Floor& obj) { *this = obj; }

Floor& Floor::operator=(const Floor&) { return *this; }

void Floor::addMateria(AMateria* materia) {
  ft_lstadd_back(&this->materia_list, ft_lstnew(materia));
}

void Floor::deleteMateria(AMateria* materia) {
  t_list* head = this->materia_list;
  while (this->materia_list) {
    if (this->materia_list->content == materia) {
      this->materia_list->content = NULL;
      return;
    }
    this->materia_list = this->materia_list->next;
  }
  this->materia_list = head;
}
