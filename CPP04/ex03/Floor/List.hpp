#pragma once

#include "../Materia/AMateria.hpp"

typedef struct s_list {
  AMateria *content;
  struct s_list *next;
} t_list;

void ft_lstadd_back(t_list **lst, t_list *obj);

t_list *ft_lstlast(t_list *lst);

t_list *ft_lstnew(AMateria *obj);
