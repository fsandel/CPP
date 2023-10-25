#include "Floor.hpp"

Floor::Floor() : materia_list(NULL) {}

Floor::~Floor() {
  int i = 0;
  while (this->materia_list) {
    i++;
    if (this->materia_list->content)
      ::operator delete(this->materia_list->content);
    t_list* next = this->materia_list->next;
    delete this->materia_list;
    this->materia_list = next;
  }
  std::cout << "deleted " << i << "objects" << std::endl;
  std::cout << "counter: " << counter << std::endl;
}

Floor::Floor(const Floor& obj) { *this = obj; }

Floor& Floor::operator=(const Floor&) { return *this; }

void Floor::addMateria(AMateria* materia) {
  this->counter++;
  ft_lstadd_back(&this->materia_list, ft_lstnew(materia));
}

void Floor::deleteMateria(AMateria* materia) {
  this->counter--;
  t_list* copy = this->materia_list;
  while (copy) {
    if (copy->content == materia) {
      copy->content = NULL;
      return;
    }
    copy = copy->next;
  }
}
